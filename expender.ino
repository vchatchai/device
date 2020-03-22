#include <Adafruit_MCP23017.h>


Adafruit_MCP23017 mcp;


#define LED_STATUS_NETWORK  8


// #define LED_STATUS_SWITCH  10
// #define PUSH_BUTTON  11
#define FLOAT_SWITCH_PORT_IN  13
#define FLOAT_SWITCH_PORT_OUT  15

#define LED_STATUS_SWITCH  11
#define PUSH_BUTTON  10
#define RESET_PIN 0
  
void expenderSetup() {  

  pinMode(RESET_PIN, OUTPUT);
  digitalWrite(RESET_PIN, HIGH);

  mcp.begin();      // use default address 0
//   mcp.pinMode()
  mcp.pinMode(LED_STATUS_SWITCH, OUTPUT);

  // mcp.pinMode(LED_STATUS_SWITCH, LOW);
  mcp.pinMode(LED_STATUS_NETWORK, OUTPUT);
//   mcp.pinMode

  valveOff();


  mcp.pinMode(PUSH_BUTTON, INPUT);  // use the p13 LED as debugging
  mcp.pullUp(PUSH_BUTTON, HIGH);  // turn on a 100K pullup internally
 
  //  mcp.pinMode(PUSH_BUTTON, INPUT);  
  // mcp.pullUp(PUSH_BUTTON, HIGH);  // turn on a 100K pullup internally


  mcp.pinMode(FLOAT_SWITCH_PORT_IN, INPUT);  
  mcp.pullUp(FLOAT_SWITCH_PORT_IN, HIGH);  

  mcp.pinMode(FLOAT_SWITCH_PORT_OUT, INPUT);  
  mcp.pullUp(FLOAT_SWITCH_PORT_OUT, HIGH);  

  Serial.println("\r\expenderSetup....finish.");

}



void expenderLoop() {
  // mcp.digitalWrite(LED_STATUS_NETWORK, HIGH);

  // Serial.println("\r\expenderLoop HIGH");

  // delay(1000);

  // mcp.digitalWrite(LED_STATUS_NETWORK, LOW);

  // Serial.println("\r\expenderLoop LOW");

}