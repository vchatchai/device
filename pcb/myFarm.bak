EESchema Schematic File Version 4
LIBS:myFarm-cache
EELAYER 29 0
EELAYER END
$Descr A4 11693 8268
encoding utf-8
Sheet 1 1
Title ""
Date ""
Rev ""
Comp ""
Comment1 ""
Comment2 ""
Comment3 ""
Comment4 ""
$EndDescr
$Comp
L mcp23017_module:MCP23017_MODULE U2
U 1 1 5D2F1077
P 4550 4450
F 0 "U2" H 4550 5731 50  0000 C CNN
F 1 "MCP23017_MODULE" H 4550 5640 50  0000 C CNN
F 2 "Module:MCP23017-MODULE" H 4750 3450 50  0001 L CNN
F 3 "http://ww1.microchip.com/downloads/en/DeviceDoc/20001952C.pdf" H 4750 3350 50  0001 L CNN
	1    4550 4450
	1    0    0    -1  
$EndComp
$Comp
L MCU_Module:WeMos_D1_mini U1
U 1 1 5D2DD170
P 2700 4050
F 0 "U1" H 2700 3161 50  0000 C CNN
F 1 "WeMos_D1_mini" H 2700 3070 50  0000 C CNN
F 2 "Module:WEMOS_D1_mini_light" H 2700 2900 50  0001 C CNN
F 3 "https://wiki.wemos.cc/products:d1:d1_mini#documentation" H 850 2900 50  0001 C CNN
	1    2700 4050
	1    0    0    -1  
$EndComp
Wire Wire Line
	3100 3750 3850 3750
Wire Wire Line
	3100 3850 3650 3850
Wire Wire Line
	3650 3850 3650 3650
Wire Wire Line
	3650 3650 3850 3650
$Comp
L power:GNDREF #PWR0101
U 1 1 5D306E2A
P 3500 6300
F 0 "#PWR0101" H 3500 6050 50  0001 C CNN
F 1 "GNDREF" H 3505 6127 50  0000 C CNN
F 2 "" H 3500 6300 50  0001 C CNN
F 3 "" H 3500 6300 50  0001 C CNN
	1    3500 6300
	1    0    0    -1  
$EndComp
Wire Wire Line
	2700 4850 2700 6050
Wire Wire Line
	2700 6050 3500 6050
Wire Wire Line
	4550 5550 4550 6050
Wire Wire Line
	4550 6050 3700 6050
Connection ~ 3500 6050
Wire Wire Line
	4800 5550 4800 6050
Wire Wire Line
	4800 6050 4550 6050
Connection ~ 4550 6050
Wire Wire Line
	2800 3250 2800 2900
Wire Wire Line
	2800 2900 3500 2900
Wire Wire Line
	4550 3350 4550 2900
Connection ~ 4550 2900
Wire Wire Line
	4550 2900 4800 2900
Wire Wire Line
	3100 3950 3250 3950
Wire Wire Line
	3250 3950 3250 5300
Wire Wire Line
	3850 4550 3600 4550
Wire Wire Line
	3600 4550 3600 5400
Wire Wire Line
	3600 5400 3250 5400
Wire Wire Line
	3250 5500 3500 5500
Wire Wire Line
	3500 6300 3500 6050
Wire Wire Line
	3850 5050 3700 5050
Wire Wire Line
	3700 5050 3700 5150
Connection ~ 3700 6050
Wire Wire Line
	3700 6050 3500 6050
Wire Wire Line
	3850 5150 3700 5150
Connection ~ 3700 5150
Wire Wire Line
	3700 5150 3700 5250
Wire Wire Line
	3850 5250 3700 5250
Connection ~ 3700 5250
Wire Wire Line
	3700 5250 3700 6050
Connection ~ 2700 6050
$Comp
L Connector_Generic:Conn_01x04 J3
U 1 1 5D327F03
P 6500 3850
F 0 "J3" H 6580 3842 50  0000 L CNN
F 1 "SW_LED" H 6580 3751 50  0000 L CNN
F 2 "Connector_PinHeader_2.54mm:PinHeader_1x04_P2.54mm_Vertical" H 6500 3850 50  0001 C CNN
F 3 "~" H 6500 3850 50  0001 C CNN
	1    6500 3850
	1    0    0    -1  
$EndComp
$Comp
L Connector_Generic:Conn_01x06 J5
U 1 1 5D328442
P 6500 4950
F 0 "J5" H 6580 4942 50  0000 L CNN
F 1 "POWER DRIVE" H 6580 4851 50  0000 L CNN
F 2 "Connector_PinHeader_2.54mm:PinHeader_1x06_P2.54mm_Vertical" H 6500 4950 50  0001 C CNN
F 3 "~" H 6500 4950 50  0001 C CNN
	1    6500 4950
	1    0    0    -1  
$EndComp
$Comp
L Connector_Generic:Conn_01x02 J0
U 1 1 5D328AC9
P 1450 2650
F 0 "J0" V 1414 2462 50  0000 R CNN
F 1 "Conn_01x02" V 1323 2462 50  0000 R CNN
F 2 "Connector_PinHeader_2.54mm:PinHeader_1x02_P2.54mm_Horizontal" H 1450 2650 50  0001 C CNN
F 3 "~" H 1450 2650 50  0001 C CNN
	1    1450 2650
	0    -1   -1   0   
$EndComp
Wire Wire Line
	5500 3650 5250 3650
Wire Wire Line
	4800 2900 4800 3350
Wire Wire Line
	4800 2900 5900 2900
Wire Wire Line
	5900 2900 5900 3000
Wire Wire Line
	5900 3000 6300 3000
Connection ~ 4800 2900
Connection ~ 5900 3000
Wire Wire Line
	5250 3750 5550 3750
Wire Wire Line
	4800 6050 5650 6050
Wire Wire Line
	5650 6050 5650 4550
Connection ~ 4800 6050
Wire Wire Line
	5900 3750 6300 3750
Wire Wire Line
	6300 4050 5650 4050
Connection ~ 5650 4050
Wire Wire Line
	5650 4050 5650 3550
$Comp
L Connector_Generic:Conn_01x04 J4
U 1 1 5D33CAF7
P 6500 4350
F 0 "J4" H 6580 4342 50  0000 L CNN
F 1 "RELAY" H 6580 4251 50  0000 L CNN
F 2 "Connector_PinHeader_2.54mm:PinHeader_1x04_P2.54mm_Vertical" H 6500 4350 50  0001 C CNN
F 3 "~" H 6500 4350 50  0001 C CNN
	1    6500 4350
	1    0    0    -1  
$EndComp
Wire Wire Line
	5900 3750 5900 4250
Wire Wire Line
	5900 4250 6300 4250
Connection ~ 5900 3750
Wire Wire Line
	6300 4550 5650 4550
Connection ~ 5650 4550
Wire Wire Line
	5650 4550 5650 4050
Wire Wire Line
	5500 3650 5500 3100
Wire Wire Line
	5500 3100 6300 3100
Wire Wire Line
	5250 3850 6300 3850
Wire Wire Line
	5250 3950 6300 3950
Wire Wire Line
	5250 4550 5400 4550
Wire Wire Line
	5400 4550 5400 4350
Wire Wire Line
	5400 4350 6300 4350
Wire Wire Line
	5250 4650 5500 4650
Wire Wire Line
	5500 4650 5500 4450
Wire Wire Line
	5500 4450 6300 4450
Wire Wire Line
	5250 4750 6300 4750
Wire Wire Line
	5250 4850 6300 4850
Wire Wire Line
	5250 4950 6300 4950
Wire Wire Line
	5250 5050 6300 5050
Wire Wire Line
	5250 5150 6300 5150
Wire Wire Line
	5250 5250 6300 5250
$Comp
L Connector_Generic:Conn_01x02 J1
U 1 1 5D3273EB
P 6500 3000
F 0 "J1" H 6580 2992 50  0000 L CNN
F 1 "LED" H 6580 2901 50  0000 L CNN
F 2 "Connector_PinHeader_2.54mm:PinHeader_1x02_P2.54mm_Vertical" H 6500 3000 50  0001 C CNN
F 3 "~" H 6500 3000 50  0001 C CNN
	1    6500 3000
	1    0    0    -1  
$EndComp
Wire Wire Line
	1550 4150 1550 4000
Wire Wire Line
	1550 4000 1950 4000
Wire Wire Line
	1950 4000 1950 6050
Wire Wire Line
	1950 6050 2700 6050
Wire Wire Line
	1650 4150 1650 2900
Wire Wire Line
	1650 2900 2800 2900
Connection ~ 2800 2900
Wire Wire Line
	1450 4150 1450 2850
Wire Wire Line
	1550 2850 1550 4000
Connection ~ 1550 4000
$Comp
L Connector_Generic:Conn_01x03 J6
U 1 1 5D3BA3DB
P 3050 5400
F 0 "J6" H 2968 5075 50  0000 C CNN
F 1 "JUMPER" H 2968 5166 50  0000 C CNN
F 2 "Connector_PinHeader_2.54mm:PinHeader_1x03_P2.54mm_Vertical" H 3050 5400 50  0001 C CNN
F 3 "~" H 3050 5400 50  0001 C CNN
	1    3050 5400
	-1   0    0    1   
$EndComp
Connection ~ 5900 3350
Wire Wire Line
	5900 3350 5900 3750
Wire Wire Line
	5900 3350 5900 3000
Wire Wire Line
	5650 3550 6300 3550
Wire Wire Line
	6300 3350 5900 3350
$Comp
L Connector_Generic:Conn_01x03 J2
U 1 1 5D32579D
P 3850 3150
F 0 "J2" H 3930 3192 50  0000 L CNN
F 1 "SENSOR" H 3930 3101 50  0000 L CNN
F 2 "Connector_PinHeader_2.54mm:PinHeader_1x03_P2.54mm_Vertical" H 3850 3150 50  0001 C CNN
F 3 "~" H 3850 3150 50  0001 C CNN
	1    3850 3150
	1    0    0    -1  
$EndComp
Wire Wire Line
	3650 3250 3500 3250
Wire Wire Line
	3500 3250 3500 5500
Connection ~ 3500 5500
Wire Wire Line
	3500 5500 3500 6050
Wire Wire Line
	3650 3050 3500 3050
Wire Wire Line
	3500 3050 3500 2900
Connection ~ 3500 2900
Wire Wire Line
	3500 2900 4550 2900
Wire Wire Line
	3100 3650 3250 3650
Wire Wire Line
	3250 3650 3250 3150
Wire Wire Line
	3250 3150 3650 3150
$Comp
L Connector_Generic:Conn_01x04 J7
U 1 1 5D3E2091
P 1550 4350
F 0 "J7" V 1422 4530 50  0000 L CNN
F 1 "SW_LED" V 1513 4530 50  0000 L CNN
F 2 "Module:POWER_SUPPLY_MODULE" H 1550 4350 50  0001 C CNN
F 3 "~" H 1550 4350 50  0001 C CNN
	1    1550 4350
	0    1    1    0   
$EndComp
$EndSCHEMATC
