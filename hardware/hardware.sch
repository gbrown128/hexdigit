EESchema Schematic File Version 4
LIBS:hardware-cache
EELAYER 26 0
EELAYER END
$Descr A4 11693 8268
encoding utf-8
Sheet 1 1
Title "Hexdigit"
Date "2018-08-29"
Rev "2"
Comp "George Brown"
Comment1 ""
Comment2 ""
Comment3 ""
Comment4 ""
$EndDescr
$Comp
L power:GND #PWR01
U 1 1 59119844
P 6700 4050
F 0 "#PWR01" H 6700 3800 50  0001 C CNN
F 1 "GND" H 6700 3900 50  0000 C CNN
F 2 "" H 6700 4050 50  0000 C CNN
F 3 "" H 6700 4050 50  0000 C CNN
	1    6700 4050
	1    0    0    -1  
$EndComp
$Comp
L power:+5V #PWR02
U 1 1 59119864
P 7750 3450
F 0 "#PWR02" H 7750 3300 50  0001 C CNN
F 1 "+5V" H 7750 3590 50  0000 C CNN
F 2 "" H 7750 3450 50  0000 C CNN
F 3 "" H 7750 3450 50  0000 C CNN
	1    7750 3450
	1    0    0    -1  
$EndComp
Wire Wire Line
	7650 3550 7750 3550
Wire Wire Line
	7750 3550 7750 3450
Wire Wire Line
	6800 3950 6700 3950
Wire Wire Line
	6700 3950 6700 4050
Text GLabel 7750 3950 2    50   Input ~ 0
D3
Text GLabel 7750 3850 2    50   Input ~ 0
D2
Text GLabel 7750 3750 2    50   Input ~ 0
D1
Text GLabel 7750 3650 2    50   Input ~ 0
D0
Text GLabel 6700 3750 0    50   Input ~ 0
DC_I
Text GLabel 6700 3650 0    50   Output ~ 0
DC_O
Text GLabel 6700 3850 0    50   Input ~ 0
DEC
Text GLabel 6700 3550 0    50   Input ~ 0
EN
Wire Wire Line
	6700 3550 6800 3550
Wire Wire Line
	6800 3650 6700 3650
Wire Wire Line
	6700 3750 6800 3750
Wire Wire Line
	6800 3850 6700 3850
Wire Wire Line
	7750 3950 7650 3950
Wire Wire Line
	7650 3850 7750 3850
Wire Wire Line
	7750 3750 7650 3750
Wire Wire Line
	7650 3650 7750 3650
$Comp
L power:+5V #PWR03
U 1 1 59119C12
P 9550 2600
F 0 "#PWR03" H 9550 2450 50  0001 C CNN
F 1 "+5V" H 9550 2740 50  0000 C CNN
F 2 "" H 9550 2600 50  0000 C CNN
F 3 "" H 9550 2600 50  0000 C CNN
	1    9550 2600
	1    0    0    -1  
$EndComp
$Comp
L power:+5V #PWR04
U 1 1 59119C98
P 2050 1850
F 0 "#PWR04" H 2050 1700 50  0001 C CNN
F 1 "+5V" H 2050 1990 50  0000 C CNN
F 2 "" H 2050 1850 50  0000 C CNN
F 3 "" H 2050 1850 50  0000 C CNN
	1    2050 1850
	1    0    0    -1  
$EndComp
Wire Wire Line
	2050 1850 2050 1950
Wire Wire Line
	2050 1950 2150 1950
$Comp
L power:GND #PWR05
U 1 1 59119D14
P 2050 3950
F 0 "#PWR05" H 2050 3700 50  0001 C CNN
F 1 "GND" H 2050 3800 50  0000 C CNN
F 2 "" H 2050 3950 50  0000 C CNN
F 3 "" H 2050 3950 50  0000 C CNN
	1    2050 3950
	1    0    0    -1  
$EndComp
Wire Wire Line
	2050 3750 2050 3850
Wire Wire Line
	2050 3850 2150 3850
Text GLabel 4150 2950 2    39   Input ~ 0
DC_I
Text GLabel 4150 2850 2    39   Output ~ 0
DC_O
Wire Wire Line
	4150 2850 4050 2850
Wire Wire Line
	4050 2650 4150 2650
Text GLabel 4150 2150 2    39   Input ~ 0
D0
Text GLabel 4150 2050 2    39   Input ~ 0
D1
Text GLabel 4150 1950 2    39   Input ~ 0
D2
Text GLabel 4150 3850 2    39   Input ~ 0
D3
Wire Wire Line
	4050 3350 4150 3350
Wire Wire Line
	4050 2550 4150 2550
Wire Wire Line
	4050 2450 4150 2450
Wire Wire Line
	4050 2350 4150 2350
Wire Wire Line
	2150 3750 2050 3750
Connection ~ 2050 3850
Wire Wire Line
	8350 2100 8850 2100
Wire Wire Line
	8850 2000 8250 2000
Wire Wire Line
	8850 2500 8450 2500
Wire Wire Line
	8450 2500 8450 2600
Wire Wire Line
	8850 2600 8550 2600
Wire Wire Line
	8850 2400 7300 2400
Wire Wire Line
	7400 2300 8850 2300
Wire Wire Line
	8850 2200 7500 2200
Wire Wire Line
	7500 2200 7500 2050
Wire Wire Line
	7600 2900 8650 2900
Wire Wire Line
	6700 2800 6800 2800
Text GLabel 6700 2800 0    39   Input ~ 0
~DP
Text GLabel 6700 2700 0    39   Input ~ 0
~SEG_C
Text GLabel 6700 2600 0    39   Input ~ 0
~SEG_D
Text GLabel 6700 2500 0    39   Input ~ 0
~SEG_E
Text GLabel 6700 2150 0    39   Input ~ 0
~SEG_B
Text GLabel 6700 2050 0    39   Input ~ 0
~SEG_A
Text GLabel 6700 1950 0    39   Input ~ 0
~SEG_F
Text GLabel 6700 1850 0    39   Input ~ 0
~SEG_G
Wire Wire Line
	6800 1850 6700 1850
Wire Wire Line
	6700 1950 6800 1950
Wire Wire Line
	6800 2050 6700 2050
Wire Wire Line
	6700 2150 6800 2150
Wire Wire Line
	6800 2500 6700 2500
Wire Wire Line
	6700 2600 6800 2600
Wire Wire Line
	6800 2700 6700 2700
Text Label 8650 2000 0    50   ~ 0
DA
Text Label 8650 2100 0    50   ~ 0
DB
Text Label 8650 2200 0    50   ~ 0
DC
Text Label 8650 2300 0    50   ~ 0
DD
Text Label 8650 2400 0    50   ~ 0
DE
Text Label 8650 2500 0    50   ~ 0
DF
Text Label 8650 2600 0    50   ~ 0
DG
Text Label 8650 2700 0    50   ~ 0
DDP
Text GLabel 4150 3550 2    39   Output ~ 0
~SEG_B
Text GLabel 4150 3450 2    39   Output ~ 0
~SEG_A
Text GLabel 4150 3350 2    39   Output ~ 0
~SEG_F
Text GLabel 4150 3150 2    39   Output ~ 0
~SEG_G
Wire Wire Line
	4150 3550 4050 3550
Wire Wire Line
	4150 3450 4050 3450
Wire Wire Line
	4050 3150 4150 3150
Text GLabel 4150 2250 2    39   Output ~ 0
~DP
Text GLabel 4150 2350 2    39   Output ~ 0
~SEG_C
Text GLabel 4150 2450 2    39   Output ~ 0
~SEG_D
Text GLabel 4150 2550 2    39   Output ~ 0
~SEG_E
Wire Wire Line
	4050 2250 4150 2250
Wire Wire Line
	4150 2150 4050 2150
Wire Wire Line
	4050 2050 4150 2050
Wire Wire Line
	4150 1950 4050 1950
Wire Wire Line
	4050 3850 4150 3850
Text GLabel 4150 2650 2    39   Input ~ 0
EN
Text GLabel 4150 3050 2    39   Input ~ 0
DEC
Wire Wire Line
	4150 2950 4050 2950
Wire Wire Line
	4050 3050 4150 3050
$Comp
L atmel-qfn-gnd:ATTINY1634-MU IC1
U 1 1 591AE19C
P 3100 3000
F 0 "IC1" H 2350 4200 50  0000 C CNN
F 1 "ATTINY1634-MU" H 3650 2000 50  0000 C CNN
F 2 "Package_DFN_QFN:QFN-20-1EP_4x4mm_P0.5mm_EP2.5x2.5mm" H 3100 3250 50  0000 C CIN
F 3 "" H 3100 3450 50  0000 C CNN
	1    3100 3000
	1    0    0    -1  
$EndComp
$Comp
L power:+5V #PWR07
U 1 1 591AE2F3
P 2050 2600
F 0 "#PWR07" H 2050 2450 50  0001 C CNN
F 1 "+5V" H 2050 2740 50  0000 C CNN
F 2 "" H 2050 2600 50  0000 C CNN
F 3 "" H 2050 2600 50  0000 C CNN
	1    2050 2600
	1    0    0    -1  
$EndComp
$Comp
L power:GND #PWR08
U 1 1 591AE319
P 2050 3100
F 0 "#PWR08" H 2050 2850 50  0001 C CNN
F 1 "GND" H 2050 2950 50  0000 C CNN
F 2 "" H 2050 3100 50  0000 C CNN
F 3 "" H 2050 3100 50  0000 C CNN
	1    2050 3100
	1    0    0    -1  
$EndComp
Wire Wire Line
	2050 2700 2050 2600
Wire Wire Line
	2050 3100 2050 3000
Wire Wire Line
	2050 3850 2050 3950
$Comp
L Display_Character:KCSA02-105 U1
U 1 1 5B86CDF4
P 9150 2300
F 0 "U1" H 9150 2967 50  0000 C CNN
F 1 "KCSA02-105" H 9150 2876 50  0000 C CNN
F 2 "Display_7Segment:7SegmentLED_LTS6760_LTS6780" H 9150 1700 50  0001 C CNN
F 3 "http://www.kingbright.com/attachments/file/psearch/000/00/00/KCSA02-105(Ver.10A).pdf" H 8650 2775 50  0001 L CNN
	1    9150 2300
	1    0    0    -1  
$EndComp
Wire Wire Line
	8850 2700 8650 2700
Wire Wire Line
	8650 2700 8650 2900
$Comp
L Device:R_Pack04 RN1
U 1 1 5B873568
P 7000 2050
F 0 "RN1" V 6583 2050 50  0000 C CNN
F 1 "150" V 6674 2050 50  0000 C CNN
F 2 "Resistor_SMD:R_Array_Convex_4x0402" V 7275 2050 50  0001 C CNN
F 3 "~" H 7000 2050 50  0001 C CNN
	1    7000 2050
	0    1    1    0   
$EndComp
$Comp
L Device:R_Pack04 RN2
U 1 1 5B873665
P 7000 2600
F 0 "RN2" V 7325 2600 50  0000 C CNN
F 1 "150" V 7234 2600 50  0000 C CNN
F 2 "Resistor_SMD:R_Array_Convex_4x0402" V 7275 2600 50  0001 C CNN
F 3 "~" H 7000 2600 50  0001 C CNN
	1    7000 2600
	0    1    -1   0   
$EndComp
$Comp
L Connector:Conn_01x05_Male J1
U 1 1 5B879EAE
P 7000 3750
F 0 "J1" H 6973 3773 50  0000 R CNN
F 1 "Conn_01x05_Male" V 6850 4150 50  0000 R CNN
F 2 "Connector_PinHeader_2.54mm:PinHeader_1x05_P2.54mm_Vertical" H 7000 3750 50  0001 C CNN
F 3 "~" H 7000 3750 50  0001 C CNN
	1    7000 3750
	-1   0    0    -1  
$EndComp
$Comp
L Connector:Conn_01x05_Male J2
U 1 1 5B880314
P 7450 3750
F 0 "J2" H 7422 3680 50  0000 R CNN
F 1 "Conn_01x05_Male" V 7300 4000 50  0000 R CNN
F 2 "Connector_PinHeader_2.54mm:PinHeader_1x05_P2.54mm_Vertical" H 7450 3750 50  0001 C CNN
F 3 "~" H 7450 3750 50  0001 C CNN
	1    7450 3750
	1    0    0    1   
$EndComp
$Comp
L Device:C C1
U 1 1 5B88279D
P 2050 2850
F 0 "C1" H 2165 2896 50  0000 L CNN
F 1 "1u" H 2165 2805 50  0000 L CNN
F 2 "Capacitor_SMD:C_0402_1005Metric" H 2088 2700 50  0001 C CNN
F 3 "~" H 2050 2850 50  0001 C CNN
	1    2050 2850
	1    0    0    -1  
$EndComp
$Comp
L Connector:TestPoint TP1
U 1 1 5B886EA5
P 4350 3650
F 0 "TP1" V 4298 3837 50  0000 L CNN
F 1 "~RESET" V 4396 3837 50  0000 L CNN
F 2 "TestPoint:TestPoint_Pad_D1.5mm" H 4550 3650 50  0001 C CNN
F 3 "~" H 4550 3650 50  0001 C CNN
	1    4350 3650
	0    1    1    0   
$EndComp
Wire Wire Line
	4050 3650 4350 3650
NoConn ~ 9450 2600
Wire Wire Line
	9450 2700 9550 2700
Wire Wire Line
	9550 2700 9550 2600
Wire Notes Line
	6400 3200 7950 3200
Wire Notes Line
	7950 3200 7950 4300
Wire Notes Line
	7950 4300 6400 4300
Wire Notes Line
	6400 4300 6400 3200
Text Notes 6400 3150 0    50   ~ 0
Breadboard Connections
Wire Notes Line
	6400 3000 9700 3000
Wire Notes Line
	9700 3000 9700 1550
Wire Notes Line
	9700 1550 6400 1550
Wire Notes Line
	6400 1550 6400 3000
Text Notes 6400 1500 0    50   ~ 0
Display
Wire Notes Line
	4850 4200 4850 1600
Wire Notes Line
	4850 1600 1900 1600
Wire Notes Line
	1900 1600 1900 4200
Wire Notes Line
	1900 4200 4850 4200
Text Notes 1900 1550 0    50   ~ 0
Microcontroller
Text Label 4100 3650 0    50   ~ 0
~RESET
Wire Wire Line
	7300 1850 7200 1850
Wire Wire Line
	7300 1850 7300 2400
Wire Wire Line
	7400 1950 7200 1950
Wire Wire Line
	7400 1950 7400 2300
Wire Wire Line
	7500 2050 7200 2050
Wire Wire Line
	7200 2150 7600 2150
Wire Wire Line
	7600 2150 7600 2900
Wire Wire Line
	8250 2700 7200 2700
Wire Wire Line
	8250 2000 8250 2700
Wire Wire Line
	7200 2600 8450 2600
Wire Wire Line
	8350 2800 7200 2800
Wire Wire Line
	8350 2100 8350 2800
Wire Wire Line
	8550 2600 8550 2550
Wire Wire Line
	8550 2550 8200 2550
Wire Wire Line
	8200 2550 8200 2500
Wire Wire Line
	8200 2500 7200 2500
$EndSCHEMATC
