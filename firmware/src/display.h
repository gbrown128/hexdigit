/**
    \file display.h
    \author George Brown
    \date 2017-08-15T18:03:23+0100
    \brief Definitions for the seven-segment display.
*/

#ifndef _DISPLAY_H_
#define _DISPLAY_H_

#include <avr/io.h>

/// Display segment bits on port A.
#define DISPLAY_SEGS_A 0b01110000
/// Inverse segment mask for port A.
#define DISPLAY_MASK_A 0b10001111
/// Display segment bits on port C.
#define DISPLAY_SEGS_C 0b00110101
/// Inverse segment mask for port C.
#define DISPLAY_MASK_C 0b11001010

/** \addtogroup DISPACC Display Access Functions
    \{
*/

/// Attempt to write a number to the display.
void num_write(uint8_t num);
/// Attempt to translate a character to a display pattern.
void char_write(uint8_t disp);
/// Flash the characters of a string on the display.
void str_write(const char* str);
/// Write bit pattern to 7-seg 0xABCDEFG
void raw_write(uint8_t pattern);

/// Toggle the decimal place.
void dp_toggle(void);

/// Turn the DP on.
#define DP_ON(x) (PORTA &= ~0x08)
/// Turn the DP off.
#define DP_OFF(x) (PORTA |= 0x08)

/// Clear the display.
#define CLEAR_DISPLAY(x)\
    A_SEGMENTS(SPECIAL_BLANK_A);\
    C_SEGMENTS(SPECIAL_BLANK_C)

/// Set and clear segment bits on PORTA
#define A_SEGMENTS(x) (PORTA = (PORTA & DISPLAY_MASK_A) | x)
/// Set and clear segment bits on PORTC
#define C_SEGMENTS(x) (PORTC = (PORTC & DISPLAY_MASK_C) | x)

/** \} */

#endif //_DISPLAY_H_
