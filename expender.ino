

void expenderSetup()
{

  pinMode(RESET_PIN, OUTPUT);
  digitalWrite(RESET_PIN, HIGH);

  mcp.begin(); // use default address 0

  mcp.pinMode(DEVICE_TYPE_PIN_0, INPUT);
  // mcp.pinMode(DEVICE_TYPE_1, INPUT);
  // mcp.pinMode(DEVICE_TYPE_2, INPUT);
  mcp.pullUp(DEVICE_TYPE_PIN_0, HIGH);
  // mcp.pullUp(DEVICE_TYPE_1, HIGH);
  // mcp.pullUp(DEVICE_TYPE_2, HIGH);

  CONFIG_1 = mcp.digitalRead(DEVICE_TYPE_PIN_0);// << 2;
  // int CONFIG_2 = mcp.digitalRead(DEVICE_TYPE_PIN_1) << 1;
  // int CONFIG_3 = mcp.digitalRead(DEVICE_TYPE_PIN_2);


  // pinMode(DEVICE_TYPE_PIN_0, INPUT_PULLUP);
  // pinMode(DEVICE_TYPE_PIN_1, INPUT_PULLUP);
  // pinMode(DEVICE_TYPE_PIN_2, INPUT_PULLUP);


  // CONFIG_1 = digitalRead(DEVICE_TYPE_PIN_0);
  // CONFIG_2 = digitalRead(DEVICE_TYPE_PIN_1);
  // CONFIG_3 = digitalRead(DEVICE_TYPE_PIN_2);


  DEVICE_TYPE = CONFIG_1;// << 2 | CONFIG_2 << 1 | CONFIG_3;

  
  Serial.print("CONFIG_1 :");
  Serial.println(CONFIG_1);

  Serial.print("CONFIG_2 :");
  Serial.println(CONFIG_2);

  Serial.print("CONFIG_3 :");
  Serial.println(CONFIG_3);


  Serial.print("DEVICE_TYPE :");
  Serial.println(DEVICE_TYPE);

  //   mcp.pinMode()
  mcp.pinMode(LED_STATUS_SWITCH, OUTPUT);

  // mcp.pinMode(LED_STATUS_SWITCH, LOW);
  mcp.pinMode(LED_STATUS_NETWORK, OUTPUT);
  //   mcp.pinMode

  switchOFF();

  mcp.pinMode(PUSH_BUTTON, INPUT); // use the p13 LED as debugging
  mcp.pullUp(PUSH_BUTTON, HIGH);   // turn on a 100K pullup internally

  //  mcp.pinMode(PUSH_BUTTON, INPUT);
  // mcp.pullUp(PUSH_BUTTON, HIGH);  // turn on a 100K pullup internally

  mcp.pinMode(FLOAT_SWITCH_PORT_IN, INPUT);
  mcp.pullUp(FLOAT_SWITCH_PORT_IN, HIGH);

  mcp.pinMode(FLOAT_SWITCH_PORT_OUT, INPUT);
  mcp.pullUp(FLOAT_SWITCH_PORT_OUT, HIGH);

  Serial.println("\r\expenderSetup....finish.");
}

void expenderLoop()
{
  // mcp.digitalWrite(LED_STATUS_NETWORK, HIGH);

  // Serial.println("\r\expenderLoop HIGH");

  // delay(1000);

  // mcp.digitalWrite(LED_STATUS_NETWORK, LOW);

  // Serial.println("\r\expenderLoop LOW");
}