EESchema Schematic File Version 2
LIBS:power
LIBS:device
LIBS:transistors
LIBS:conn
LIBS:linear
LIBS:regul
LIBS:74xx
LIBS:cmos4000
LIBS:adc-dac
LIBS:memory
LIBS:xilinx
LIBS:microcontrollers
LIBS:dsp
LIBS:microchip
LIBS:analog_switches
LIBS:motorola
LIBS:texas
LIBS:intel
LIBS:audio
LIBS:interface
LIBS:digital-audio
LIBS:philips
LIBS:display
LIBS:cypress
LIBS:siliconi
LIBS:opto
LIBS:contrib
LIBS:valves
LIBS:atmel-qfn-gnd
EELAYER 25 0
EELAYER END
$Descr A4 11693 8268
encoding utf-8
Sheet 1 1
Title "Hexdigit"
Date "2017-05-16"
Rev "1"
Comp ""
Comment1 ""
Comment2 ""
Comment3 ""
Comment4 ""
$EndDescr
$Comp
L CONN_01X05 P1
U 1 1 591193D8
P 9600 2450
F 0 "P1" H 9600 2750 50  0000 C CNN
F 1 "CONN_01X05" V 9700 2450 50  0000 C CNN
F 2 "Pin_Headers:Pin_Header_Straight_1x05" H 9600 2450 50  0001 C CNN
F 3 "" H 9600 2450 50  0000 C CNN
	1    9600 2450
	1    0    0    -1  
$EndComp
$Comp
L CONN_01X05 P2
U 1 1 59119463
P 9950 2450
F 0 "P2" H 9950 2750 50  0000 C CNN
F 1 "CONN_01X05" V 10050 2450 50  0000 C CNN
F 2 "Pin_Headers:Pin_Header_Straight_1x05" H 9950 2450 50  0001 C CNN
F 3 "" H 9950 2450 50  0000 C CNN
	1    9950 2450
	-1   0    0    1   
$EndComp
$Comp
L R_PACK4 RP1
U 1 1 59119511
P 3250 1550
F 0 "RP1" H 3250 2000 50  0000 C CNN
F 1 "150" H 3250 1500 50  0000 C CNN
F 2 "Resistors_SMD:R_Array_Convex_4x0402" H 3250 1550 50  0001 C CNN
F 3 "" H 3250 1550 50  0000 C CNN
	1    3250 1550
	1    0    0    -1  
$EndComp
$Comp
L R_PACK4 RP2
U 1 1 59119594
P 3250 1800
F 0 "RP2" H 3250 2250 50  0000 C CNN
F 1 "150" H 3250 1750 50  0000 C CNN
F 2 "Resistors_SMD:R_Array_Convex_4x0402" H 3250 1800 50  0001 C CNN
F 3 "" H 3250 1800 50  0000 C CNN
	1    3250 1800
	1    0    0    1   
$EndComp
$Comp
L 7SEGMENTS AFF1
U 1 1 591195C9
P 5500 1750
F 0 "AFF1" H 5500 2300 50  0000 C CNN
F 1 "7SEGMENTS" H 5500 1300 50  0000 C CNN
F 2 "Displays_7-Segment:7SegmentLED_LTS6760_LTS6780" H 5500 1750 50  0001 C CNN
F 3 "" H 5500 1750 50  0000 C CNN
	1    5500 1750
	1    0    0    -1  
$EndComp
$Comp
L GND #PWR4
U 1 1 59119844
P 9300 2750
F 0 "#PWR4" H 9300 2500 50  0001 C CNN
F 1 "GND" H 9300 2600 50  0000 C CNN
F 2 "" H 9300 2750 50  0000 C CNN
F 3 "" H 9300 2750 50  0000 C CNN
	1    9300 2750
	1    0    0    -1  
$EndComp
$Comp
L +5V #PWR5
U 1 1 59119864
P 10250 2150
F 0 "#PWR5" H 10250 2000 50  0001 C CNN
F 1 "+5V" H 10250 2290 50  0000 C CNN
F 2 "" H 10250 2150 50  0000 C CNN
F 3 "" H 10250 2150 50  0000 C CNN
	1    10250 2150
	1    0    0    -1  
$EndComp
Wire Wire Line
	10150 2250 10250 2250
Wire Wire Line
	10250 2250 10250 2150
Wire Wire Line
	9400 2650 9300 2650
Wire Wire Line
	9300 2650 9300 2750
Text GLabel 10250 2650 2    50   Input ~ 0
D3
Text GLabel 10250 2550 2    50   Input ~ 0
D2
Text GLabel 10250 2450 2    50   Input ~ 0
D1
Text GLabel 10250 2350 2    50   Input ~ 0
D0
Text GLabel 9300 2550 0    50   Input ~ 0
DC_I
Text GLabel 9300 2250 0    50   Output ~ 0
DC_O
Text GLabel 9300 2450 0    50   Input ~ 0
DEC
Text GLabel 9300 2350 0    50   Input ~ 0
EN
Wire Wire Line
	9300 2250 9400 2250
Wire Wire Line
	9400 2350 9300 2350
Wire Wire Line
	9300 2450 9400 2450
Wire Wire Line
	9400 2550 9300 2550
Wire Wire Line
	10250 2650 10150 2650
Wire Wire Line
	10150 2550 10250 2550
Wire Wire Line
	10250 2450 10150 2450
Wire Wire Line
	10150 2350 10250 2350
Wire Wire Line
	6200 1300 6100 1300
$Comp
L +5V #PWR1
U 1 1 59119C12
P 6200 1200
F 0 "#PWR1" H 6200 1050 50  0001 C CNN
F 1 "+5V" H 6200 1340 50  0000 C CNN
F 2 "" H 6200 1200 50  0000 C CNN
F 3 "" H 6200 1200 50  0000 C CNN
	1    6200 1200
	1    0    0    -1  
$EndComp
$Comp
L +5V #PWR2
U 1 1 59119C98
P 8200 3250
F 0 "#PWR2" H 8200 3100 50  0001 C CNN
F 1 "+5V" H 8200 3390 50  0000 C CNN
F 2 "" H 8200 3250 50  0000 C CNN
F 3 "" H 8200 3250 50  0000 C CNN
	1    8200 3250
	1    0    0    -1  
$EndComp
Wire Wire Line
	8200 3250 8200 3350
Wire Wire Line
	8200 3350 8300 3350
$Comp
L GND #PWR3
U 1 1 59119D14
P 8200 5350
F 0 "#PWR3" H 8200 5100 50  0001 C CNN
F 1 "GND" H 8200 5200 50  0000 C CNN
F 2 "" H 8200 5350 50  0000 C CNN
F 3 "" H 8200 5350 50  0000 C CNN
	1    8200 5350
	1    0    0    -1  
$EndComp
Wire Wire Line
	8200 5150 8200 5350
Wire Wire Line
	8200 5250 8300 5250
Text GLabel 10300 4050 2    50   Input ~ 0
DC_I
Text GLabel 10300 4250 2    50   Output ~ 0
DC_O
Wire Wire Line
	10300 4250 10200 4250
Wire Wire Line
	10200 4050 10300 4050
Text GLabel 10300 4350 2    50   Input ~ 0
D0
Text GLabel 10300 4450 2    50   Input ~ 0
D1
Text GLabel 10300 4550 2    50   Input ~ 0
D2
Text GLabel 10300 4850 2    50   Input ~ 0
D3
Wire Wire Line
	10200 4850 10300 4850
Wire Wire Line
	10200 4350 10300 4350
Wire Wire Line
	10200 4450 10300 4450
Wire Wire Line
	10200 4550 10300 4550
Wire Wire Line
	8300 5150 8200 5150
Connection ~ 8200 5250
Wire Wire Line
	4600 1450 4600 1850
Wire Wire Line
	4600 1450 4900 1450
Wire Wire Line
	4900 1350 4500 1350
Wire Wire Line
	4500 1350 4500 1950
Wire Wire Line
	4900 1850 4700 1850
Wire Wire Line
	4700 1850 4700 2050
Wire Wire Line
	4900 1950 4800 1950
Wire Wire Line
	4800 1950 4800 2150
Wire Wire Line
	4600 1850 3450 1850
Wire Wire Line
	4500 1950 3450 1950
Wire Wire Line
	4700 2050 3450 2050
Wire Wire Line
	4800 2150 3450 2150
Wire Wire Line
	4900 1750 3550 1750
Wire Wire Line
	3550 1750 3550 1500
Wire Wire Line
	3550 1500 3450 1500
Wire Wire Line
	3450 1400 3650 1400
Wire Wire Line
	3650 1400 3650 1650
Wire Wire Line
	3650 1650 4900 1650
Wire Wire Line
	4900 1550 3750 1550
Wire Wire Line
	3750 1550 3750 1300
Wire Wire Line
	3750 1300 3450 1300
Wire Wire Line
	3450 1200 3850 1200
Wire Wire Line
	3850 1200 3850 2250
Wire Wire Line
	3850 2250 6200 2250
Wire Wire Line
	6200 2250 6200 2000
Wire Wire Line
	6200 2000 6100 2000
Wire Wire Line
	2950 1200 3050 1200
Text GLabel 2950 1200 0    50   Input ~ 0
~DP
Text GLabel 2950 1300 0    50   Input ~ 0
~SEG_C
Text GLabel 2950 1400 0    50   Input ~ 0
~SEG_D
Text GLabel 2950 1500 0    50   Input ~ 0
~SEG_E
Text GLabel 2950 1850 0    50   Input ~ 0
~SEG_B
Text GLabel 2950 1950 0    50   Input ~ 0
~SEG_A
Text GLabel 2950 2050 0    50   Input ~ 0
~SEG_F
Text GLabel 2950 2150 0    50   Input ~ 0
~SEG_G
Wire Wire Line
	3050 2150 2950 2150
Wire Wire Line
	2950 2050 3050 2050
Wire Wire Line
	3050 1950 2950 1950
Wire Wire Line
	2950 1850 3050 1850
Wire Wire Line
	3050 1500 2950 1500
Wire Wire Line
	2950 1400 3050 1400
Wire Wire Line
	3050 1300 2950 1300
Text Label 4800 1350 0    50   ~ 0
DA
Text Label 4800 1450 0    50   ~ 0
DB
Text Label 4800 1550 0    50   ~ 0
DC
Text Label 4800 1650 0    50   ~ 0
DD
Text Label 4800 1750 0    50   ~ 0
DE
Text Label 4800 1850 0    50   ~ 0
DF
Text Label 4800 1950 0    50   ~ 0
DG
Text Label 4800 2250 0    50   ~ 0
DDP
Text GLabel 10300 5250 2    50   Output ~ 0
~SEG_B
Text GLabel 10300 5150 2    50   Output ~ 0
~SEG_A
Text GLabel 10300 4950 2    50   Output ~ 0
~SEG_F
Text GLabel 10300 4750 2    50   Output ~ 0
~SEG_G
Wire Wire Line
	10300 5150 10200 5150
Wire Wire Line
	10300 4950 10200 4950
Wire Wire Line
	10200 4750 10300 4750
Text GLabel 10300 3650 2    50   Output ~ 0
~DP
Text GLabel 10300 3750 2    50   Output ~ 0
~SEG_C
Text GLabel 10300 3850 2    50   Output ~ 0
~SEG_D
Text GLabel 10300 3950 2    50   Output ~ 0
~SEG_E
Wire Wire Line
	10200 3950 10300 3950
Wire Wire Line
	10300 3850 10200 3850
Wire Wire Line
	10200 3750 10300 3750
Wire Wire Line
	10300 3650 10200 3650
Wire Wire Line
	10200 5250 10300 5250
$Comp
L TEST_1P W1
U 1 1 591300BB
P 10300 5050
F 0 "W1" H 10300 5320 50  0000 C CNN
F 1 "TEST_1P" H 10300 5250 50  0000 C CNN
F 2 "Measurement_Points:Measurement_Point_Round-SMD-Pad_Small" H 10350 5800 50  0000 C CNN
F 3 "" H 10500 5050 50  0000 C CNN
	1    10300 5050
	0    1    1    0   
$EndComp
Wire Wire Line
	10300 5050 10200 5050
$Comp
L C C1
U 1 1 59131417
P 10450 3350
F 0 "C1" H 10475 3450 50  0000 L CNN
F 1 "10n" H 10475 3250 50  0000 L CNN
F 2 "Capacitors_SMD:C_0402" H 10450 3950 50  0000 C CNN
F 3 "" H 10450 3350 50  0000 C CNN
	1    10450 3350
	0    1    1    0   
$EndComp
$Comp
L GND #PWR6
U 1 1 5913148A
P 10700 3450
F 0 "#PWR6" H 10700 3200 50  0001 C CNN
F 1 "GND" H 10700 3300 50  0000 C CNN
F 2 "" H 10700 3450 50  0000 C CNN
F 3 "" H 10700 3450 50  0000 C CNN
	1    10700 3450
	1    0    0    -1  
$EndComp
Wire Wire Line
	10200 3350 10300 3350
Wire Wire Line
	10600 3350 10700 3350
Wire Wire Line
	10700 3350 10700 3450
Text GLabel 10300 3550 2    50   Input ~ 0
EN
Text GLabel 10300 3450 2    50   Input ~ 0
DEC
Wire Wire Line
	10300 3450 10200 3450
Wire Wire Line
	10200 3550 10300 3550
$Comp
L ATTINY1634-MU IC1
U 1 1 591AE19C
P 9250 4400
F 0 "IC1" H 8500 5600 50  0000 C CNN
F 1 "ATTINY1634-MU" H 9800 3400 50  0000 C CNN
F 2 "MLF/QFN20" H 9250 4650 50  0000 C CIN
F 3 "" H 9250 4850 50  0000 C CNN
	1    9250 4400
	1    0    0    -1  
$EndComp
Wire Wire Line
	6200 1300 6200 1200
NoConn ~ 6100 1400
$EndSCHEMATC
