

#define ON LOW
#define OFF HIGH

#define VALVE_A1 4
#define VALVE_A2 5
#define VALVE_B1 6
#define VALVE_B2 7

#define TYPE 1

#define DELAY 500

void driveSetup()
{

  mcp.pinMode(VALVE_A1, OUTPUT);
  mcp.pinMode(VALVE_A2, OUTPUT);

  mcp.pinMode(VALVE_B1, OUTPUT);
  mcp.pinMode(VALVE_B2, OUTPUT);
}

void driveOn()
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

}

void driveOff()
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

}
