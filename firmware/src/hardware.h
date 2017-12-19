/**
    \file hardware.h
    \author George Brown
    \date 2017-12-18T22:54:40+0000
    \brief Helpers for various hardware bits.
*/

#ifndef _HARDWARE_H_
#define _HARDWARE_H_

/// Display segment bits on port A.
#define DISPLAY_MASK_A 0b00001110
/// Display segment bits on port C.
#define DISPLAY_MASK_C 0b00110101

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

/** \} */

#endif //_HARDWARE_H_
