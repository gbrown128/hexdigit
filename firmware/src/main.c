/**
    \file main.c
    \author George Brown
    \date 2017-05-30T20:54:13+0100
    \brief Main code for the hexdigit.
*/

#include <avr/io.h>
#include <util/delay.h>

#include "hardware.h"
#include "font.h"

void raw_write(uint8_t pattern);
uint8_t read_input(void);

int main(void)
{
    init_hw();
    PORTA = 0xFF;
    PORTC = 0xFF;
    while(1){
        raw_write(NUMBER_5);
        _delay_ms(1000);
        raw_write(NUMBER_0);
        _delay_ms(1000);
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
