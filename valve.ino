

//Motor Connections
//Change this if you wish to use another diagram
//#define EnA  10
//#define EnB  5



#define ON LOW
#define OFF HIGH

#define RELAY_A 0
#define RELAY_B 1

// #define INA_1 3
// #define INA_2 4
// #define INB_1 5
// #define INB_2 6
// #define ENABLE_A 2
// #define ENABLE_B 7


#define TYPE 0


int STATUS_DRIVE_A = 0;
int STATUS_DRIVE_B = 0;


void valveSetup()
{
  

  // mcp.pinMode(ENABLE_A, OUTPUT);
  // mcp.pinMode(ENABLE_B, OUTPUT);
  // mcp.pinMode(INA_1, OUTPUT);
  // mcp.pinMode(INA_2, OUTPUT);
  // mcp.pinMode(INB_1, OUTPUT);
  // mcp.pinMode(INB_2, OUTPUT);
  mcp.pinMode(RELAY_A, OUTPUT);
  mcp.pinMode(RELAY_B, OUTPUT);
  valveOff();
}

void valveRelayOn()
{

  // digitalWrite(D7, ON);
  // digitalWrite(D8, ON);
    mcp.digitalWrite(RELAY_A, ON);
    mcp.digitalWrite(RELAY_B, ON); 

  //LED_STATUS ON
  // ledState = 2;
  // digitalWrite(LED_STATUS, !ledState);

  ledStatusSwitchON();
  Serial.print("Valve Relay On");
}

void valveRelayAOn()
{

  // digitalWrite(D7, ON);
  // digitalWrite(D8, ON);
    mcp.digitalWrite(RELAY_A, ON); 
  //LED_STATUS ON
  // ledState = 2;
  // digitalWrite(LED_STATUS, !ledState);

  ledStatusSwitchON();
  Serial.print("Valve Relay On");
}

void valveRelayBOn()
{
 
  mcp.digitalWrite(RELAY_B, ON); 

  ledStatusSwitchON();
  Serial.print("Valve Relay On");
}


void valveRelayOff()
{ 

  mcp.digitalWrite(RELAY_A, OFF);
  mcp.digitalWrite(RELAY_B, OFF); 

  ledStatusSwitchOFF();
  Serial.print("Valve Relay Off");
}
void valveRelayAOff()
{
 
  mcp.digitalWrite(RELAY_A, OFF); 
  ledStatusSwitchOFF();
  Serial.print("Valve Relay Off");
}
void valveRelayBOff()
{

 
  mcp.digitalWrite(RELAY_B, OFF); 
  ledStatusSwitchOFF();
  Serial.print("Valve Relay Off");
}
void valveDriverOn()
{
  
  // mcp.digitalWrite(ENABLE_A, HIGH);
  // mcp.digitalWrite(ENABLE_B, HIGH);
  // mcp.digitalWrite(INA_1, HIGH);
  // mcp.digitalWrite(INA_2, LOW);
  // mcp.digitalWrite(INB_1, HIGH);
  // mcp.digitalWrite(INB_2, LOW);
 valveRelayBOn();
 valveRelayAOn();


  delay(1000);
  // mcp.digitalWrite(ENABLE_A, LOW);
  // mcp.digitalWrite(ENABLE_B, LOW);
  // mcp.digitalWrite(INA_1, LOW);
  // mcp.digitalWrite(INA_2, LOW);
  // mcp.digitalWrite(INB_1, LOW);
  // mcp.digitalWrite(INB_2, LOW);


 valveRelayBOff();
 valveRelayAOff();

  ledStatusSwitchON();
  Serial.print("Valve Driver On");
}

// void valveDriverAOn()
// { 
//   // mcp.digitalWrite(ENABLE_A, HIGH); 
//   // mcp.digitalWrite(INA_1, HIGH);
//   // mcp.digitalWrite(INA_2, LOW); 

//   delay(1000);
//   // mcp.digitalWrite(ENABLE_A, LOW); 
//   // mcp.digitalWrite(INA_1, LOW);
//   // mcp.digitalWrite(INA_2, LOW); 
 
//   STATUS_DRIVE_A = ON;
//   ledStatusSwitchON();
//   Serial.print("Valve Driver On");
// }
// void valveDriverBOn()
// {  
//   // mcp.digitalWrite(ENABLE_B, HIGH); 
//   // mcp.digitalWrite(INB_1, HIGH);
//   // mcp.digitalWrite(INB_2, LOW);

//   delay(1000); 
//   // mcp.digitalWrite(ENABLE_B, LOW); 
//   // mcp.digitalWrite(INB_1, LOW);
//   // mcp.digitalWrite(INB_2, LOW);
 
//   STATUS_DRIVE_B = ON; 
//   ledStatusSwitchON();
//   Serial.print("Valve Driver On");
// }
void valveDriverOff()
{
  
  // mcp.digitalWrite(ENABLE_A, HIGH);
  // mcp.digitalWrite(ENABLE_B, HIGH);
  // mcp.digitalWrite(INA_1, LOW);
  // mcp.digitalWrite(INA_2, HIGH);
  // mcp.digitalWrite(INB_1, LOW);
  // mcp.digitalWrite(INB_2, HIGH);
 valveRelayBOn();
 valveRelayAOff();

  delay(1000);

  //  valveRelayBOff();
 valveRelayAOff();
  // mcp.digitalWrite(ENABLE_A, LOW);
  // mcp.digitalWrite(ENABLE_B, LOW);
  // mcp.digitalWrite(INA_1, LOW);
  // mcp.digitalWrite(INA_2, LOW);
  // mcp.digitalWrite(INB_1, LOW);
  // mcp.digitalWrite(INB_2, LOW);
  //LED_STATUS OFF
  // ledState = 0;
  // digitalWrite(LED_STATUS, !ledState);
  ledStatusSwitchOFF();
  Serial.print("Valve Driver Off");
}
// 
// void valveDriverAOff()
// {  
//   // mcp.digitalWrite(ENABLE_A, HIGH); 
//   // mcp.digitalWrite(INA_1, LOW);
//   // mcp.digitalWrite(INA_2, HIGH); 

//   delay(1000);
//   // mcp.digitalWrite(ENABLE_A, LOW); 
//   // mcp.digitalWrite(INA_1, LOW);
//   // mcp.digitalWrite(INA_2, LOW);  
//   STATUS_DRIVE_A  = OFF;
//   ledStatusSwitchOFF();
//   Serial.print("Valve Driver Off");
// }

// void valveDriverBOff()
// {  
//   // mcp.digitalWrite(ENABLE_B, HIGH); 
//   // mcp.digitalWrite(INB_1, LOW);
//   // mcp.digitalWrite(INB_2, HIGH);

//   delay(1000); 
//   // mcp.digitalWrite(ENABLE_B, LOW); 
//   // mcp.digitalWrite(INB_1, LOW);
//   // mcp.digitalWrite(INB_2, LOW); 
//   ledStatusSwitchOFF();
//   STATUS_DRIVE_B = OFF;
//   Serial.print("Valve Driver Off");
// }

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

uint8_t getRelayA(){
  return mcp.digitalRead(RELAY_A);
}

uint8_t getRelayB(){
  return mcp.digitalRead(RELAY_B);

}

uint8_t getDriveA(){
  return STATUS_DRIVE_A;
}

uint8_t getDriveB(){
  return STATUS_DRIVE_B;

}