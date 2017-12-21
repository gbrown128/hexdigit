/**
    \file main.c
    \author George Brown
    \date 2017-05-30T20:54:13+0100
    \brief Main code for the hexdigit.
*/

#include <avr/io.h>
#include <util/delay.h>

#include "hardware.h"
#include "display.h"
#include "font.h"

void raw_write(uint8_t pattern);
uint8_t read_input(void);

int main(void)
{
    uint8_t idx = 0;
    init_hw();
    PORTA = 0xFF;
    PORTC = 0xFF;
    while(1){
        for(idx = '0'; idx <= '9'; idx++){
            char_write(idx);
            _delay_ms(250);
        }
        for(idx = 'A'; idx <= 'Z'; idx++){
            char_write(idx);
            _delay_ms(250);
        }
        for(idx = 'a'; idx <= 'z'; idx++){
            char_write(idx);
            _delay_ms(250);
        }
        char_write(' ');
        _delay_ms(1000);
        char_write('_');
        _delay_ms(1000);
        char_write('-');
        _delay_ms(1000);
        char_write('=');
        _delay_ms(1000);
    }
    return 0;
}

uint8_t read_input(void)
{
    uint8_t value = 0;
    value = (PINB >> 1) & 0x07;
    value |= ((PINC << 2) & 0x08);
    return value;
}
