/**
    \file hardware.c
    \author George Brown
    \date 2017-12-18T22:54:41+0000
    \brief Hardware init functions.
*/

#include <avr/io.h>
#include "hardware.h"
#include "display.h"
#include "font.h"

void init_hw(void)
{
    init_gpio();
    init_uart();
}

void init_gpio(void)
{
    // Input/Output directions.
    // 1 is output.
    // DP and C, D, E
    DDRA = 0b01111000;
    // UART Out. D0-2
    DDRB = 0b00000001;
    // A, B, G, and F
    DDRC = 0b00110101;

    // Pull up on inputs.
    PUEA = 0b10000110;
    PUEB = 0b00001110;
    PUEC = 0b00001010;

    // Ensure the display is off at startup.
    A_SEGMENTS(SPECIAL_BLANK_A);
    C_SEGMENTS(SPECIAL_BLANK_C);
    DP_OFF();
    return;
}

void init_uart(void)
{
    // Set up 9600 baud rate calculation.
    #include <util/setbaud.h>
    // Set baud rate.
    UBRR0H = UBRRH_VALUE;
    UBRR0L = UBRRL_VALUE;
    // Use doublespeed mode if needed.
    #if USE_2X
        UCSR0A |= _BV(U2X0);
    #else
        UCSR0A &= ~_BV(U2X0);
    #endif
    // Enable the transmit and receive hardware.
    UCSR0B |= _BV(RXEN0) | _BV(TXEN0);
    return;
}
