#include <stdio.h>
#include <stdint.h>

void raw_write(char* name, uint8_t pattern)
{
    // Logic mash to turn bits into pins.

    uint8_t out_c = 0, out_a = 0;

    out_c ^= (-(pattern&0x1) ^ out_c) & (1 << 0);
    pattern>>=1;
    out_c ^= (-(pattern&0x1) ^ out_c) & (1 << 2);
    pattern>>=1;
    out_a ^= (-(pattern&0x1) ^ out_a) & (1 << 6);
    pattern>>=1;
    out_a ^= (-(pattern&0x1) ^ out_a) & (1 << 5);
    pattern>>=1;
    out_a ^= (-(pattern&0x1) ^ out_a) & (1 << 4);
    pattern>>=1;
    out_c ^= (-(pattern&0x1) ^ out_c) & (1 << 5);
    pattern>>=1;
    out_c ^= (-(pattern&0x1) ^ out_c) & (1 << 4);

    printf("#define %s_A 0x%02X\n", name, out_a);
    printf("#define %s_C 0x%02X\n", name, out_c);
    return;
}

int main(void){
raw_write("NUMBER_0", 0b0000001);
raw_write("NUMBER_1", 0b1001111);
raw_write("NUMBER_2", 0b0010010);
raw_write("NUMBER_3", 0b0000110);
raw_write("NUMBER_4", 0b1001100);
raw_write("NUMBER_5", 0b0100100);
raw_write("NUMBER_6", 0b0100000);
raw_write("NUMBER_7", 0b0001111);
raw_write("NUMBER_8", 0b0000000);
raw_write("NUMBER_9", 0b0001100);
raw_write("LETTER_A", 0b0001000);
raw_write("LETTER_B", 0b1100000);
raw_write("LETTER_C", 0b1110010);
raw_write("LETTER_D", 0b1000010);
raw_write("LETTER_E", 0b0110000);
raw_write("LETTER_F", 0b0111000);
raw_write("LETTER_G", 0b0000100);
raw_write("LETTER_H", 0b1001000);
raw_write("LETTER_J", 0b1000011);
raw_write("LETTER_L", 0b1110001);
raw_write("LETTER_N", 0b1101010);
raw_write("LETTER_O", 0b1100010);
raw_write("LETTER_P", 0b0011000);
raw_write("LETTER_Q", 0b0001100);
raw_write("LETTER_R", 0b1111010);
raw_write("LETTER_S", 0b0100100);
raw_write("LETTER_T", 0b1110000);
raw_write("LETTER_U", 0b1100011);
raw_write("LETTER_Y", 0b1000100);
raw_write("SPECIAL_BLANK", 0b1111111);
raw_write("SPECIAL_SPACE", 0b1111111);
raw_write("SPECIAL_UNDERSCORE", 0b1110111);
raw_write("SPECIAL_OVERSCORE", 0b0111111);
raw_write("SPECIAL_HYPHEN", 0b1111110);
raw_write("SPECIAL_EQUALS", 0b1110110);
raw_write("SPECIAL_DEFINED", 0b0110110);
raw_write("SPECIAL_SEG_A", 0b0111111);
raw_write("SPECIAL_SEG_B", 0b1011111);
raw_write("SPECIAL_SEG_C", 0b1101111);
raw_write("SPECIAL_SEG_D", 0b1110111);
raw_write("SPECIAL_SEG_E", 0b1111011);
raw_write("SPECIAL_SEG_F", 0b1111101);
raw_write("SPECIAL_SEG_G", 0b1111110);
return 0;
}
