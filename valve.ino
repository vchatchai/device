

//Motor Connections
//Change this if you wish to use another diagram
//#define EnA  10
//#define EnB  5



#define ON LOW
#define OFF HIGH

#define RELAY_1 0
#define RELAY_2 1

#define INA_1 2
#define INA_2 3
#define INB_1 4
#define INB_2 5
#define ENABLE_A 6
#define ENABLE_B 7


#define TYPE 1



void valveSetup()
{
  
  // All motor control pins are outputs
  //  pinMode(EnA, OUTPUT);
  //  pinMode(EnB, OUTPUT);
  // pinMode(D5, OUTPUT);
  // pinMode(D6, OUTPUT);
  // pinMode(D7, OUTPUT);
  // pinMode(D8, OUTPUT);
  // pinMode(EN, OUTPUT);
  // digitalWrite(D5, LOW);
  // digitalWrite(D6, LOW);
  // digitalWrite(D7, LOW);
  // digitalWrite(EN, LOW);
  // digitalWrite(D8, LOW);

  mcp.pinMode(ENABLE_A, OUTPUT);
  mcp.pinMode(ENABLE_B, OUTPUT);
  mcp.pinMode(INA_1, OUTPUT);
  mcp.pinMode(INA_2, OUTPUT);
  mcp.pinMode(INB_1, OUTPUT);
  mcp.pinMode(INB_2, OUTPUT);
  mcp.pinMode(RELAY_1, OUTPUT);
  mcp.pinMode(RELAY_2, OUTPUT);
  valveOff();
}

void valveRelayOn()
{

  // digitalWrite(D7, ON);
  // digitalWrite(D8, ON);
    mcp.digitalWrite(RELAY_1, ON);
    mcp.digitalWrite(RELAY_2, ON); 

  //LED_STATUS ON
  // ledState = 2;
  // digitalWrite(LED_STATUS, !ledState);

  ledStatusSwitchON();
  Serial.print("Valve Relay On");
}

void valveRelayOff()
{

  // digitalWrite(D7, OFF);
  // digitalWrite(D8, OFF);
  // //LED_STATUS OFF
  // ledState = 0;
  // digitalWrite(LED_STATUS, !ledState);

    mcp.digitalWrite(RELAY_1, OFF);
    mcp.digitalWrite(RELAY_2, OFF); 

  ledStatusSwitchOFF();
  Serial.print("Valve Relay Off");
}

void valveDriverOn()
{
  // digitalWrite(EN, HIGH);
  // // turn on motor A
  // digitalWrite(D5, HIGH);
  // digitalWrite(D6, LOW);
  // // set speed to 150 out 255
  // //  analogWrite(EnA, 200);
  // // turn on motor B
  // digitalWrite(D7, HIGH);
  // digitalWrite(D8, LOW);
  // set speed to 150 out 255
  //  analogWrite(EnB, 200);
  mcp.digitalWrite(ENABLE_A, HIGH);
  mcp.digitalWrite(ENABLE_B, HIGH);
  mcp.digitalWrite(INA_1, HIGH);
  mcp.digitalWrite(INA_2, LOW);
  mcp.digitalWrite(INB_1, HIGH);
  mcp.digitalWrite(INB_2, LOW);

  delay(1000);
  mcp.digitalWrite(ENABLE_A, LOW);
  mcp.digitalWrite(ENABLE_B, LOW);
  mcp.digitalWrite(INA_1, LOW);
  mcp.digitalWrite(INA_2, LOW);
  mcp.digitalWrite(INB_1, LOW);
  mcp.digitalWrite(INB_2, LOW);

  // now turn off motors
  // digitalWrite(D5, LOW);
  // digitalWrite(D6, LOW);
  // digitalWrite(D7, LOW);
  // digitalWrite(D8, LOW);


  // digitalWrite(EN, LOW);

  //LED_STATUS ON
  // ledState = 1;
  // digitalWrite(LED_STATUS, !ledState);
  ledStatusSwitchON();
  Serial.print("Valve Driver On");
}

void valveDriverOff()
{
  //  digitalWrite(EN, HIGH);
  // // turn on motor A
  // digitalWrite(D5, LOW);
  // digitalWrite(D6, HIGH);
  // // set speed to 150 out 255
  // //  analogWrite(EnA, 200);
  // // turn on motor B
  // digitalWrite(D7, LOW);
  // digitalWrite(D8, HIGH);
  // set speed to 150 out 255
  //  analogWrite(EnB, 200);
  
  // delay(1000);
  // // now turn off motors
  // digitalWrite(D5, LOW);
  // digitalWrite(D6, LOW);
  // digitalWrite(D7, LOW);
  // digitalWrite(D8, LOW);


  // digitalWrite(EN, LOW);
  mcp.digitalWrite(ENABLE_A, HIGH);
  mcp.digitalWrite(ENABLE_B, HIGH);
  mcp.digitalWrite(INA_1, LOW);
  mcp.digitalWrite(INA_2, HIGH);
  mcp.digitalWrite(INB_1, LOW);
  mcp.digitalWrite(INB_2, HIGH);

  delay(1000);
  mcp.digitalWrite(ENABLE_A, LOW);
  mcp.digitalWrite(ENABLE_B, LOW);
  mcp.digitalWrite(INA_1, LOW);
  mcp.digitalWrite(INA_2, LOW);
  mcp.digitalWrite(INB_1, LOW);
  mcp.digitalWrite(INB_2, LOW);
  //LED_STATUS OFF
  // ledState = 0;
  // digitalWrite(LED_STATUS, !ledState);
  ledStatusSwitchOFF();
  Serial.print("Valve Driver Off");
}

void valveOn()
{
  if (TYPE == 1)
  {
    valveRelayOn();
  }
  else
  {
    valveDriverOn();
  }
}

void valveOff()
{
  if (TYPE == 1)
  {
    valveRelayOff();
  }
  else
  {
    valveDriverOff();
  }
}

uint8_t getCurrentValveStatus1(){
  return mcp.digitalRead(RELAY_1);
}

uint8_t getCurrentValveStatus2(){
  return mcp.digitalRead(RELAY_2);

}
