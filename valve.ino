

#define ON LOW
#define OFF HIGH

#define VALVE_A1 4
#define VALVE_A2 5
#define VALVE_B1 6
#define VALVE_B2 7

#define TYPE 1

int STATUS_DRIVE_A = 0;
int STATUS_DRIVE_B = 0;

#define DELAY 500

void valveSetup()
{

  mcp.pinMode(VALVE_A1, OUTPUT);
  mcp.pinMode(VALVE_A2, OUTPUT);

  mcp.pinMode(VALVE_B1, OUTPUT);
  mcp.pinMode(VALVE_B2, OUTPUT);
}

// void valveRelayOn()
// {

//   mcp.digitalWrite(VALVE_A, ON);
//   mcp.digitalWrite(VALVE_B, ON);

//   ledStatusSwitchON();
//   Serial.print("Valve Relay On");
// }

// void valveRelayAOn()
// {
//   mcp.digitalWrite(VALVE_A, ON);

//   ledStatusSwitchON();
//   Serial.print("Valve Relay On");
// }

// void valveRelayBOn()
// {

//   mcp.digitalWrite(VALVE_B, ON);

//   ledStatusSwitchON();
//   Serial.print("Valve Relay On");
// }

// void valveRelayOff()
// {

//   mcp.digitalWrite(VALVE_A, OFF);
//   mcp.digitalWrite(VALVE_B, OFF);

//   ledStatusSwitchOFF();
//   Serial.print("Valve Relay Off");
// }
// void valveRelayAOff()
// {

//   mcp.digitalWrite(VALVE_A, OFF);
//   ledStatusSwitchOFF();
//   Serial.print("Valve Relay Off");
// }
// void valveRelayBOff()
// {

//   mcp.digitalWrite(VALVE_B, OFF);
//   ledStatusSwitchOFF();
//   Serial.print("Valve Relay Off");
// }
// void valveDriverOn()
// {
//   valveRelayBOn();
//   valveRelayAOn();

//   delay(DELAY);

//   valveRelayBOff();
//   valveRelayAOff();

//   ledStatusSwitchON();
//   Serial.print("Valve Driver On");
// }

// void valveDriverOff()
// {
//   ;
//   valveRelayBOn();
//   valveRelayAOff();

//   delay(DELAY);

//   //  valveRelayBOff();
//   valveRelayBOff();
//   ledStatusSwitchOFF();
//   Serial.print("Valve Driver Off");
// }

void valveOn()
{
  mcp.digitalWrite(VALVE_A1, ON);
  mcp.digitalWrite(VALVE_A2, OFF);
  mcp.digitalWrite(VALVE_B1, ON);
  mcp.digitalWrite(VALVE_B2, OFF);
  delay(DELAY); 
  mcp.digitalWrite(VALVE_A1, OFF);
  mcp.digitalWrite(VALVE_A2, OFF);
  mcp.digitalWrite(VALVE_B1, OFF);
  mcp.digitalWrite(VALVE_B2, OFF);
  ledStatusSwitchON();
  
}

void valveOff()
{
  mcp.digitalWrite(VALVE_A1, OFF);
  mcp.digitalWrite(VALVE_A2, ON);
  mcp.digitalWrite(VALVE_B1, OFF);
  mcp.digitalWrite(VALVE_B2, ON);
  delay(DELAY); 
  mcp.digitalWrite(VALVE_A1, OFF);
  mcp.digitalWrite(VALVE_A2, OFF);
  mcp.digitalWrite(VALVE_B1, OFF);
  mcp.digitalWrite(VALVE_B2, OFF);
  ledStatusSwitchOFF();
}

// uint8_t getRelayA()
// {
//   return mcp.digitalRead(VALVE_A);
// }

// uint8_t getRelayB()
// {
//   return mcp.digitalRead(VALVE_B);
// }

uint8_t getDriveA()
{
  return STATUS_DRIVE_A;
}

uint8_t getDriveB()
{
  return STATUS_DRIVE_B;
}