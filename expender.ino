#include <Adafruit_MCP23017.h>


Adafruit_MCP23017 mcp;

#define LED_STATUS_SWITCH  10

#define LED_STATUS_NETWORK  8


#define PUSH_BUTTON  11


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


  mcp.pinMode(PUSH_BUTTON, INPUT);  // use the p13 LED as debugging
  mcp.pullUp(PUSH_BUTTON, HIGH);  // turn on a 100K pullup internally
 
  //  mcp.pinMode(PUSH_BUTTON, INPUT);  
  // mcp.pullUp(PUSH_BUTTON, HIGH);  // turn on a 100K pullup internally


  Serial.println("\r\expenderSetup....finish.");

}



void expenderLoop() {
  // mcp.digitalWrite(LED_STATUS_NETWORK, HIGH);

  // Serial.println("\r\expenderLoop HIGH");

  // delay(1000);

  // mcp.digitalWrite(LED_STATUS_NETWORK, LOW);

  // Serial.println("\r\expenderLoop LOW");

}