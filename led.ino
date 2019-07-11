

void ledStatusSwitchON(){
    mcp.digitalWrite(LED_STATUS_SWITCH, HIGH);
}

void ledStatusSwitchOFF(){
    mcp.digitalWrite(LED_STATUS_SWITCH, LOW);

}

void ledStatusSwitchToggle(){
    int value = mcp.digitalRead(LED_STATUS_SWITCH);
    mcp.digitalWrite(LED_STATUS_SWITCH, !value);
}

void ledStatusNetworkON(){
    mcp.digitalWrite(LED_STATUS_NETWORK, HIGH);

}

void ledStatusNetworkOFF(){
    mcp.digitalWrite(LED_STATUS_NETWORK, LOW);

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
