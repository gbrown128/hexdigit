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

    // Turn on all digits as a hardware test.
    DP_ON();
    num_write(8);
    _delay_ms(250);
    DP_OFF();

    // Test loop.
    while(1){
        idx++;
        idx%=10;
        num_write(idx);
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
