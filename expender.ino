#include <Adafruit_MCP23017.h>


Adafruit_MCP23017 mcp;

#define LED_STATUS_SWITCH  0

#define LED_STATUS_NETWORK  1


#define PUSH_BUTTON  6



  
void expenderSetup() {  
  mcp.begin();      // use default address 0
//   mcp.pinMode()
  mcp.pinMode(LED_STATUS_SWITCH, OUTPUT);

  mcp.pinMode(LED_STATUS_NETWORK, OUTPUT);
//   mcp.pinMode

  mcp.pinMode(PUSH_BUTTON, INPUT);  // use the p13 LED as debugging
  mcp.pullUp(PUSH_BUTTON, HIGH);  // turn on a 100K pullup internally
 
  //  mcp.pinMode(PUSH_BUTTON, INPUT);  
  // mcp.pullUp(PUSH_BUTTON, HIGH);  // turn on a 100K pullup internally



}



void expenderLoop() {
  // The LED will 'echo' the button
//   digitalWrite(13, mcp.digitalRead(0));
}