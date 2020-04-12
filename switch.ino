

#define ON LOW
#define OFF HIGH

#define VALVE_A1 4
#define VALVE_A2 5
#define VALVE_B1 6
#define VALVE_B2 7

#define TYPE 1


#define DELAY 500

void valveSetup()
{

  if(CONFIG_1 == 1) {
    driveSetup();

  } else { 
    relaySetup();
  }

}

void switchON()
{

  if(CONFIG_1 == 1) {
    driveOn();

  } else { 
    relayOn();
  }

  
  ledStatusSwitchON();
}

void switchOFF()
{
 
  if(CONFIG_1 == 1) {
    driveOff();

  } else { 
    relayOff();
  }


  ledStatusSwitchOFF();

}

uint8_t switchStatus()
{
  return SWITCH_STATUS;
}
