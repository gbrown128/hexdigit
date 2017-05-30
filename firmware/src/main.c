/**
    \file main.c
    \author George Brown
    \date 2017-05-30T20:54:13+0100
    \brief Main code for the hexdigit.
*/

#include <avr/io.h>
#include <util/delay.h>
#include "font.h"

/// Display segment bits on port A.
#define DISPLAY_MASK_A 0b00001110
/// Display segment bits on port C.
#define DISPLAY_MASK_C 0b00110101

void raw_write(uint8_t pattern);
void gpio_init(void);

int main(void)
{
    gpio_init();
    while(1){
        raw_write(SPECIAL_SEG_A);
        _delay_ms(250);
        raw_write(SPECIAL_SEG_B);
        _delay_ms(250);
        raw_write(SPECIAL_SEG_C);
        _delay_ms(250);
        raw_write(SPECIAL_SEG_D);
        _delay_ms(250);
        raw_write(SPECIAL_SEG_E);
        _delay_ms(250);
        raw_write(SPECIAL_SEG_F);
        _delay_ms(250);
        raw_write(SPECIAL_SEG_G);
        _delay_ms(250);

        raw_write(NUMBER_0);
        _delay_ms(1000);
        raw_write(NUMBER_1);
        _delay_ms(1000);
        raw_write(NUMBER_2);
        _delay_ms(1000);
        raw_write(NUMBER_3);
        _delay_ms(1000);
        raw_write(NUMBER_4);
        _delay_ms(1000);
        raw_write(NUMBER_5);
        _delay_ms(1000);
        raw_write(NUMBER_6);
        _delay_ms(1000);
        raw_write(NUMBER_7);
        _delay_ms(1000);
        raw_write(NUMBER_8);
        _delay_ms(1000);
        raw_write(NUMBER_9);
        _delay_ms(1000);
        raw_write(LETTER_A);
        _delay_ms(1000);
        raw_write(LETTER_B);
        _delay_ms(1000);
        raw_write(LETTER_C);
        _delay_ms(1000);
        raw_write(LETTER_D);
        _delay_ms(1000);
        raw_write(LETTER_E);
        _delay_ms(1000);
        raw_write(LETTER_F);
        _delay_ms(1000);
        raw_write(LETTER_G);
        _delay_ms(1000);
        raw_write(LETTER_H);
        _delay_ms(1000);
//        raw_write(LETTER_I);
//        _delay_ms(1000);
        raw_write(LETTER_J);
        _delay_ms(1000);
//        raw_write(LETTER_K);
//        _delay_ms(1000);
        raw_write(LETTER_L);
        _delay_ms(1000);
//        raw_write(LETTER_M);
//        _delay_ms(1000);
        raw_write(LETTER_N);
        _delay_ms(1000);
        raw_write(LETTER_O);
        _delay_ms(1000);
        raw_write(LETTER_P);
        _delay_ms(1000);
        raw_write(LETTER_Q);
        _delay_ms(1000);
        raw_write(LETTER_R);
        _delay_ms(1000);
        raw_write(LETTER_S);
        _delay_ms(1000);
        raw_write(LETTER_T);
        _delay_ms(1000);
        raw_write(LETTER_U);
        _delay_ms(1000);
//        raw_write(LETTER_V);
//        _delay_ms(1000);
//        raw_write(LETTER_W);
//        _delay_ms(1000);
//        raw_write(LETTER_X);
//        _delay_ms(1000);
        raw_write(LETTER_Y);
        _delay_ms(1000);
//        raw_write(LETTER_Z);
//        _delay_ms(1000);
        raw_write(SPECIAL_BLANK);
        _delay_ms(1000);
        raw_write(SPECIAL_UNDERSCORE);
        _delay_ms(1000);
        raw_write(SPECIAL_OVERSCORE);
        _delay_ms(1000);
        raw_write(SPECIAL_EQUALS);
        _delay_ms(1000);
        raw_write(SPECIAL_DEFINED);
        _delay_ms(1000);
    }
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
    PORTD = out_c;
    PORTA = out_a;
    return;
}

void gpio_init(void)
{
    // Input/Output directions.
    DDRA = 0b01111000;
    DDRB = 0b00000001;
    DDRC = 0b00110101;
    DDRD = 0b00110101;
}
