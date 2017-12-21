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
    uint8_t idx;
    // Set up the hardware.
    init_hw();

    // Toggle the DP to show the device is on.
    DP_ON();
    _delay_ms(250);
    DP_OFF();

    // Device here must work out its operating mode.
    // TODO All that logic.

    // Test loop.
    while(1){
/*        for(idx = '0'; idx <= '9'; idx++){
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
        char_write('=');*/
        str_write("Hello There");
        raw_write(SPECIAL_SEG_B);
        DP_ON();
        _delay_ms(250);
        CLEAR_DISPLAY();
        DP_OFF();
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
