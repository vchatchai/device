



void floatSwitchSetup()
{

}

int floatSwitchValueIn()
{
    int value = mcp.digitalRead(FLOAT_SWITCH_PORT_IN);

    // return value;
    return value;
}


int floatSwitchValueOut()
{
    int value = mcp.digitalRead(FLOAT_SWITCH_PORT_OUT);

    return value;
    // return 1;
}