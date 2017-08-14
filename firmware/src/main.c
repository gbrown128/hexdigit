/**
    \file main.c
    \author George Brown
    \date 2017-05-30T20:54:13+0100
    \brief Main code for the hexdigit.
*/

#define F_CPU 8000000

#include <avr/io.h>
#include <util/delay.h>
#include "font.h"

/// Display segment bits on port A.
#define DISPLAY_MASK_A 0b00001110
/// Display segment bits on port C.
#define DISPLAY_MASK_C 0b00110101

void raw_write(uint8_t pattern);
void gpio_init(void);
uint8_t read_input(void);

int main(void)
{
    gpio_init();
    uart_init();
    PORTA = 0xFF;
    PORTC = 0xFF;
    while(1){
        raw_write(NUMBER_9);
        _delay_ms(100);
    }
    return 0;
}

void raw_write(uint8_t pattern)
{
    // Logic mash to turn bits into pins.
    uint8_t out_a, out_c;
    out_a = PORTA;
    out_c = PORTC;

    out_c ^= (-(pattern&0x1) ^ out_c) & (1 << PC0);
    pattern>>=1;
    out_c ^= (-(pattern&0x1) ^ out_c) & (1 << PC2);
    pattern>>=1;
    out_a ^= (-(pattern&0x1) ^ out_a) & (1 << PA6);
    pattern>>=1;
    out_a ^= (-(pattern&0x1) ^ out_a) & (1 << PA5);
    pattern>>=1;
    out_a ^= (-(pattern&0x1) ^ out_a) & (1 << PA4);
    pattern>>=1;
    out_c ^= (-(pattern&0x1) ^ out_c) & (1 << PC5);
    pattern>>=1;
    out_c ^= (-(pattern&0x1) ^ out_c) & (1 << PC4);

    PORTA = out_a;
    PORTC = out_c;
    return;
}

uint8_t read_input(void)
{
    uint8_t value = 0;
    value = (PINB >> 1) & 0x07;
    value |= ((PINC << 2) & 0x08);
    return value;
}

void gpio_init(void)
{
    // Input/Output directions.
    DDRA = 0b01111000;
    // UART Out.
    DDRB = 0b00000001;
    DDRC = 0b00110101;

    // Pull up on inputs.
    PUEA = 0b10000110;
    PUEB = 0b00001110;
    PUEC = 0b00001010;
    return;
}

void uart_init(void)
{
    // Set up 9600 baud rate calculation.
    #define BAUD 9600
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

void adc_init(void)
{
    
    return;
}
