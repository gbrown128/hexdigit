#include <stdio.h>
#include <stdint.h>

void raw_write(char* name, uint8_t pattern)
{
    uint8_t a;
    a = name[7];
    printf("    case '%c':\n        A_SEGMENTS(%s_A);\n        C_SEGMENTS(%s_C);\n        break;\n", a, name, name);
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
raw_write("SPECIAL_SPACE", 0b1111111);
raw_write("SPECIAL_UNDERSCORE", 0b1110111);
raw_write("SPECIAL_HYPHEN", 0b1111110);
raw_write("SPECIAL_EQUALS", 0b1110110);
return 0;
}
