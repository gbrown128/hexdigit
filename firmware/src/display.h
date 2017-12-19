/**
    \file display.h
    \author George Brown
    \date 2017-08-15T18:03:23+0100
    \brief Definitions for the seven-segment display.
*/

#ifndef _DISPLAY_H_
#define _DISPLAY_H_

/** \addtogroup DISPACC Display Access Functions
    \{
*/

/// Attempt to write a number to the display.
void num_write(uint8_t num);
/// Attempt to translate a character to a display pattern.
void char_write(uint8_t disp);
/// Write bit pattern to 7-seg 0xABCDEFG
void raw_write(uint8_t pattern);

/** \} */

#endif //_DISPLAY_H_
