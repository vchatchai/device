

#include <PubSubClient.h>
 
#include <TransmissionResult.h>
#include <NetworkInfo.h>
#include <ESP8266WiFiMesh.h>
#include <TypeConversionFunctions.h>

#include <Hash.h>

#include <ESP8266WiFi.h>  //For ESP8266
#include <ESP8266mDNS.h>  //For OTA
#include <WiFiUdp.h>      //For OTA
#include <ArduinoOTA.h>   //For OTA
//for LED status
#include <Ticker.h>
#include <Adafruit_MCP23017.h>

Adafruit_MCP23017 mcp;

struct Config {
  char *name;
  int port;
  char *config_wifi_ssid;
  char *config_wifi_password ;

  char *config_mqtt_server ;
  char *config_mqtt_port ;
  char *config_mqtt_user;
  char *config_mqtt_password ;
};

Config config;                         // <- global configuration object




//WIFI configuration
// #define wifi_ssid "Home"
// #define wifi_password "manager1"

//MQTT configuration
// #define mqtt_server "m11.cloudmqtt.com"
// #define mqtt_port 11621
// #define mqtt_user "kysbvegn"
// #define mqtt_password "Ww2mmbIEU9_e"
String mqtt_client_id = "ESP8266-";
//This text is concatenated with ChipId to get unique client_id
//MQTT Topic configuration

String root = "/";
String farm = root + "farm_home";
String humidity_topic = farm + "/sensor/humidity/" ;
String temperature_topic = farm + "/sensor/temperature/" ;
String node_topic = farm + "/node/status";
String valve_topic = farm + "/valve/";
String pump_topic = farm + "/pump/";

//LED PORT
// #define LED_STATUS 4
// #define LED_POWER 2
#define LED_POWER_ON LOW
#define LED_POWER_OFF HIGH


// #define D8  15
// #define D7  13
// #define D6  12
// #define D5  14
// #define EN   16

#define LED_STATUS_NETWORK 8

// #define LED_STATUS_SWITCH  10
// #define PUSH_BUTTON  11
#define FLOAT_SWITCH_PORT_IN 13
#define FLOAT_SWITCH_PORT_OUT 15

#define LED_STATUS_SWITCH 11
#define PUSH_BUTTON 10
#define RESET_PIN 0

#define RELAY_A 0  
#define RELAY_B 1


#define DEVICE_TYPE_PIN_0 12
#define DEVICE_TYPE_PIN_1 D0
#define DEVICE_TYPE_PIN_2 D7

#define DEVICE_RELAY 0
#define DEVICE_PLUSE_SWICTH 1

/*
CONFIG_1 = 0 RELAY
CONFIG_1 = 1 PLUSE SWITCH





*/
int CONFIG_1 = 0;
int CONFIG_2 = 0;
int CONFIG_3 = 0;
int DEVICE_TYPE = 0 ;
int SWITCH_STATUS = 0;



Ticker statusTicker;
Ticker powerTicker;

Ticker watchdog;
// void statusTick()
// {

//   //toggle state
//   int state = digitalRead(LED_POWER);  // get the current state of GPIO1 pin
//   digitalWrite(LED_POWER, !state);     // set pin to the opposite state
// }

// void powerTick()
// {

//   //toggle state
//   int state = digitalRead(LED_STATUS);  // get the current state of GPIO1 pin
//   digitalWrite(LED_STATUS, !state);     // set pin to the opposite state

// }

int count = 0;

bool connected = false;
bool watchdogtriger = false;

void watchdogTicker() {
  if(connected){
    watchdogtriger = !watchdogtriger;
  }else{
    if(count < 3000){
      count++;
      watchdogtriger = !watchdogtriger;

    }
  }
  
  
  digitalWrite(D6, watchdogtriger);   // turn the LED on (HIGH is the voltage level)
    


}


void setup() {

  pinMode(D6, OUTPUT);
  watchdog.attach(0.2, watchdogTicker);
  Serial.begin(115200);
  Serial.println("\r\nBooting...");
  expenderSetup();
  configSetup();
  valveSetup();
  Serial.println("\r\nSet Value PinMode.");
  // initialize digital pin LED as an output.
  // pinMode(LED_POWER, OUTPUT);
  // pinMode(LED_STATUS, OUTPUT);

  dhtSetup();

  pushButtonSetup();
  setup_wifi();


  OTASetup();

  Serial.println("Configuring MQTT server...");
  mqtt_client_id = ESP.getChipId();
  humidity_topic = humidity_topic + ESP.getChipId();
  temperature_topic = temperature_topic + ESP.getChipId();
  valve_topic = valve_topic + ESP.getChipId();
  mqttSetup();
  Serial.printf("   Server IP: %s\r\n", config.config_mqtt_server);
  Serial.printf("   Username:  %s\r\n", config.config_mqtt_user);
  Serial.println("   Cliend Id: " + mqtt_client_id);
  Serial.println("   MQTT configured!");


  Serial.println("Setup completed! Running app...");

  Serial.println("Mounting FS...");


  connected = true;


}

void loop() {
  connected = WiFi.status() == WL_CONNECTED;
//  valveOn();
 
  ArduinoOTA.handle();

  mqttLoop();
  dhtLoop();
  pushButtonLoop();
  expenderLoop();
}
