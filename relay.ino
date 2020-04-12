

void relaySetup()
{
  

  // mcp.pinMode(ENABLE_A, OUTPUT);
  // mcp.pinMode(ENABLE_B, OUTPUT);
  // mcp.pinMode(INA_1, OUTPUT);
  // mcp.pinMode(INA_2, OUTPUT);
  // mcp.pinMode(INB_1, OUTPUT);
  // mcp.pinMode(INB_2, OUTPUT);

  mcp.pinMode(RELAY_A, OUTPUT);
  mcp.pinMode(RELAY_B, OUTPUT);
  relayOff();
}

void relayOn()
{

  // digitalWrite(D7, ON);
  // digitalWrite(D8, ON);
    mcp.digitalWrite(RELAY_A, ON);
    mcp.digitalWrite(RELAY_B, ON); 

//   //LED_STATUS ON
//   // ledState = 2;
//   // digitalWrite(LED_STATUS, !ledState);

//   ledStatusSwitchON();
//   Serial.print("Valve Relay On");
}

void relayOff()
{ 

  mcp.digitalWrite(RELAY_A, OFF);
  mcp.digitalWrite(RELAY_B, OFF); 

//   ledStatusSwitchOFF();
//   Serial.print("Valve Relay Off");
}