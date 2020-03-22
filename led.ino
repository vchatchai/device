#define LED_STATUS_SWITCH_ON LOW
#define LED_STATUS_SWITCH_OFF HIGH

void ledStatusSwitchON(){

  STATUS_DRIVE_A = 1;
  STATUS_DRIVE_B = 1; 
  mcp.digitalWrite(LED_STATUS_SWITCH, LED_STATUS_SWITCH_ON);
}

void ledStatusSwitchOFF(){

  STATUS_DRIVE_A = 0;
  STATUS_DRIVE_B = 0; 
  mcp.digitalWrite(LED_STATUS_SWITCH, LED_STATUS_SWITCH_OFF);

}

void ledStatusSwitchToggle(){
    int value = mcp.digitalRead(LED_STATUS_SWITCH);
    mcp.digitalWrite(LED_STATUS_SWITCH, !value);
}

void ledStatusNetworkON(){
    mcp.digitalWrite(LED_STATUS_NETWORK, LED_STATUS_SWITCH_ON);

}

void ledStatusNetworkOFF(){
    mcp.digitalWrite(LED_STATUS_NETWORK, LED_STATUS_SWITCH_OFF);

}

void ledStatusNetworkToggle(){
    int value = mcp.digitalRead(LED_STATUS_NETWORK);
    mcp.digitalWrite(LED_STATUS_NETWORK, !value);

}

void ledStatusSwitchAndNetworkToggle(){
    int value = mcp.digitalRead(LED_STATUS_NETWORK);
    mcp.digitalWrite(LED_STATUS_NETWORK, !value);
    mcp.digitalWrite(LED_STATUS_SWITCH, !value);

}
