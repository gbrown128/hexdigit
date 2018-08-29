/**
    \file hardware.h
    \author George Brown
    \date 2017-12-18T22:54:40+0000
    \brief Helpers for various hardware bits.
*/

#ifndef _HARDWARE_H_
#define _HARDWARE_H_

/** \addtogroup HWINIT Hardware Init Functions
    \{
*/

#define BAUD 9600

/// Run all the hardware init.
void init_hw(void);
/// Set up the GPIO.
void init_gpio(void);
/// Set up the UART.
void init_uart(void);
/// Set up the ADC
void init_adc(void);
/** \} */

#endif //_HARDWARE_H_
