/**
    \file display.c
    \author George Brown
    \date 2017-08-15T18:03:17+0100
    \brief Source code for interacting with the 7-segment display.
*/

#include <util/delay.h>
#include "display.h"
#include "font.h"

void num_write(uint8_t num)
{
    switch(num){
    case 0:
        A_SEGMENTS(NUMBER_0_A);
        C_SEGMENTS(NUMBER_0_C);
        break;
    case 1:
        A_SEGMENTS(NUMBER_1_A);
        C_SEGMENTS(NUMBER_1_C);
        break;
    case 2:
        A_SEGMENTS(NUMBER_2_A);
        C_SEGMENTS(NUMBER_2_C);
        break;
    case 3:
        A_SEGMENTS(NUMBER_3_A);
        C_SEGMENTS(NUMBER_3_C);
        break;
    case 4:
        A_SEGMENTS(NUMBER_4_A);
        C_SEGMENTS(NUMBER_4_C);
        break;
    case 5:
        A_SEGMENTS(NUMBER_5_A);
        C_SEGMENTS(NUMBER_5_C);
        break;
    case 6:
        A_SEGMENTS(NUMBER_6_A);
        C_SEGMENTS(NUMBER_6_C);
        break;
    case 7:
        A_SEGMENTS(NUMBER_7_A);
        C_SEGMENTS(NUMBER_7_C);
        break;
    case 8:
        A_SEGMENTS(NUMBER_8_A);
        C_SEGMENTS(NUMBER_8_C);
        break;
    case 9:
        A_SEGMENTS(NUMBER_9_A);
        C_SEGMENTS(NUMBER_9_C);
        break;
    default:
        break;
    }
    return;
}

void char_write(uint8_t disp)
{
    // If it's a number, use the number function.
    if((disp >= '0') && (disp <= '9')){
        num_write(disp-'0');
        return;
    }
    // Capitalise to simplify the switch statment.
    if((disp >= 'a') && (disp <= 'z')){
        disp -= 'a' - 'A';
    }
    switch(disp){
    case 'A':
        A_SEGMENTS(LETTER_A_A);
        C_SEGMENTS(LETTER_A_C);
        break;
    case 'B':
        A_SEGMENTS(LETTER_B_A);
        C_SEGMENTS(LETTER_B_C);
        break;
    case 'C':
        A_SEGMENTS(LETTER_C_A);
        C_SEGMENTS(LETTER_C_C);
        break;
    case 'D':
        A_SEGMENTS(LETTER_D_A);
        C_SEGMENTS(LETTER_D_C);
        break;
    case 'E':
        A_SEGMENTS(LETTER_E_A);
        C_SEGMENTS(LETTER_E_C);
        break;
    case 'F':
        A_SEGMENTS(LETTER_F_A);
        C_SEGMENTS(LETTER_F_C);
        break;
    case 'G':
        A_SEGMENTS(LETTER_G_A);
        C_SEGMENTS(LETTER_G_C);
        break;
    case 'H':
        A_SEGMENTS(LETTER_H_A);
        C_SEGMENTS(LETTER_H_C);
        break;
    case 'I':
        A_SEGMENTS(LETTER_I_A);
        C_SEGMENTS(LETTER_I_C);
        break;
    case 'J':
        A_SEGMENTS(LETTER_J_A);
        C_SEGMENTS(LETTER_J_C);
        break;
    case 'L':
        A_SEGMENTS(LETTER_L_A);
        C_SEGMENTS(LETTER_L_C);
        break;
    case 'N':
        A_SEGMENTS(LETTER_N_A);
        C_SEGMENTS(LETTER_N_C);
        break;
    case 'O':
        A_SEGMENTS(LETTER_O_A);
        C_SEGMENTS(LETTER_O_C);
        break;
    case 'P':
        A_SEGMENTS(LETTER_P_A);
        C_SEGMENTS(LETTER_P_C);
        break;
    case 'Q':
        A_SEGMENTS(LETTER_Q_A);
        C_SEGMENTS(LETTER_Q_C);
        break;
    case 'R':
        A_SEGMENTS(LETTER_R_A);
        C_SEGMENTS(LETTER_R_C);
        break;
    case 'S':
        A_SEGMENTS(LETTER_S_A);
        C_SEGMENTS(LETTER_S_C);
        break;
    case 'T':
        A_SEGMENTS(LETTER_T_A);
        C_SEGMENTS(LETTER_T_C);
        break;
    case 'U':
        A_SEGMENTS(LETTER_U_A);
        C_SEGMENTS(LETTER_U_C);
        break;
    case 'Y':
        A_SEGMENTS(LETTER_Y_A);
        C_SEGMENTS(LETTER_Y_C);
        break;
    case ' ':
        A_SEGMENTS(SPECIAL_SPACE_A);
        C_SEGMENTS(SPECIAL_SPACE_C);
        break;
    case '_':
        A_SEGMENTS(SPECIAL_UNDERSCORE_A);
        C_SEGMENTS(SPECIAL_UNDERSCORE_C);
        break;
    case '-':
        A_SEGMENTS(SPECIAL_HYPHEN_A);
        C_SEGMENTS(SPECIAL_HYPHEN_C);
        break;
    case '=':
        A_SEGMENTS(SPECIAL_EQUALS_A);
        C_SEGMENTS(SPECIAL_EQUALS_C);
        break;
    default:
        break;
    }
    return;
}

void str_write(const char* str)
{
    uint16_t idx;
    for (idx = 0; str[idx]; idx++) {
        CLEAR_DISPLAY();
        _delay_ms(150);
        char_write(str[idx]);
        _delay_ms(250);
    }
    CLEAR_DISPLAY();
    return;\
}

void raw_write(uint8_t pattern)
{
    // Logic mash to turn bits into pins.
    uint8_t out_a = 0, out_c = 0;

    // These bits happen to align just right:
    out_a = pattern & 0x10; // Seg C
    out_c = pattern & 0x21; // Seg G and B

    // And now the rest
    out_c |= (0x40 & pattern) ? _BV(PC4): 0; // Seg A
    out_c |= (0x02 & pattern) ? _BV(PC2): 0; // Seg F

    out_a |= (0x08 & pattern) ? _BV(PA5): 0; // Seg D
    out_a |= (0x04 & pattern) ? _BV(PA6): 0; // Seg E

    A_SEGMENTS(out_a);
    C_SEGMENTS(out_c);
    return;
}

inline void dp_toggle(void)
{
    PORTA ^= 0x08;
}
