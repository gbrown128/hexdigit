/**
    \file font.h
    \author George Brown
    \date 2017-05-30T20:32:53+0100
    \brief Contains definitions to turn numbers into display segments.
*/

#ifndef _FONT_H_
#define _FONT_H_

/** \addtogroup font Display Font

    Numbers are prefixed NUMBER_
    Letters are prefixed LETTER_. Note that not all letters are valid.
    Special outputs are designated SPECIAL_.

    The output is active low, so these all appear inverted.

    Digit ordering is 0bABCDEFG
    \{
*/

/** \addtogroup font_numbers Numbers for the display font.
    \{
*/

#define NUMBER_0 0b0000001
#define NUMBER_1 0b1001111
#define NUMBER_2 0b0010010
#define NUMBER_3 0b0000110
#define NUMBER_4 0b1001100
#define NUMBER_5 0b0100100
#define NUMBER_6 0b0100000
#define NUMBER_7 0b0001111
#define NUMBER_8 0b0000000
#define NUMBER_9 0b0001100

#define NUMBER_0_A 0x00
#define NUMBER_0_C 0x01
#define NUMBER_1_A 0x60
#define NUMBER_1_C 0x15
#define NUMBER_2_A 0x10
#define NUMBER_2_C 0x04
#define NUMBER_3_A 0x40
#define NUMBER_3_C 0x04
#define NUMBER_4_A 0x60
#define NUMBER_4_C 0x10
#define NUMBER_5_A 0x40
#define NUMBER_5_C 0x20
#define NUMBER_6_A 0x00
#define NUMBER_6_C 0x20
#define NUMBER_7_A 0x60
#define NUMBER_7_C 0x05
#define NUMBER_8_A 0x00
#define NUMBER_8_C 0x00
#define NUMBER_9_A 0x60
#define NUMBER_9_C 0x00

/** \} */ // font_numbers

/** \addtogroup font_letters Letters for the display font.
    Be aware that I, K, M, V, W, X, Z are missing.
    \{
*/
#define LETTER_A 0b0001000
#define LETTER_B 0b1100000
#define LETTER_C 0b1110010
#define LETTER_D 0b1000010
#define LETTER_E 0b0110000
#define LETTER_F 0b0111000
#define LETTER_G 0b0000100
#define LETTER_H 0b1001000
#define LETTER_I 0b1101111
#define LETTER_J 0b1000011
//#define LETTER_K 0b
#define LETTER_L 0b1110001
//#define LETTER_M 0b
#define LETTER_N 0b1101010
#define LETTER_O 0b1100010
#define LETTER_P 0b0011000
#define LETTER_Q 0b0001100
#define LETTER_R 0b1111010
#define LETTER_S 0b0100100
#define LETTER_T 0b1110000
#define LETTER_U 0b1100011
//#define LETTER_V 0b
//#define LETTER_W 0b
//#define LETTER_X 0b
#define LETTER_Y 0b1000100
//#define LETTER_Z 0b

#define LETTER_A_A 0x20
#define LETTER_A_C 0x00
#define LETTER_B_A 0x00
#define LETTER_B_C 0x30
#define LETTER_C_A 0x10
#define LETTER_C_C 0x34
#define LETTER_D_A 0x00
#define LETTER_D_C 0x14
#define LETTER_E_A 0x10
#define LETTER_E_C 0x20
#define LETTER_F_A 0x30
#define LETTER_F_C 0x20
#define LETTER_G_A 0x40
#define LETTER_G_C 0x00
#define LETTER_H_A 0x20
#define LETTER_H_C 0x10
#define LETTER_I_A 0x60
#define LETTER_I_C 0x35
#define LETTER_J_A 0x00
#define LETTER_J_C 0x15
#define LETTER_L_A 0x10
#define LETTER_L_C 0x31
#define LETTER_N_A 0x20
#define LETTER_N_C 0x34
#define LETTER_O_A 0x00
#define LETTER_O_C 0x34
#define LETTER_P_A 0x30
#define LETTER_P_C 0x00
#define LETTER_Q_A 0x60
#define LETTER_Q_C 0x00
#define LETTER_R_A 0x30
#define LETTER_R_C 0x34
#define LETTER_S_A 0x40
#define LETTER_S_C 0x20
#define LETTER_T_A 0x10
#define LETTER_T_C 0x30
#define LETTER_U_A 0x00
#define LETTER_U_C 0x35
#define LETTER_Y_A 0x40
#define LETTER_Y_C 0x10

/** \} */ // font_letters

/** \addtogroup font_special Special characters for the display font.
    \{
*/

#define SPECIAL_BLANK       0b1111111 ///< Blank the display.
#define SPECIAL_SPACE       0b1111111 ///< Space
#define SPECIAL_UNDERSCORE  0b1110111 ///< Underscore _ (Seg D)
#define SPECIAL_OVERSCORE   0b0111111 ///< Overscore ‾ (Seg A)
#define SPECIAL_HYPHEN      0b1111110 ///< Hyphen - (Seg G)
#define SPECIAL_EQUALS      0b1110110 ///< Equals =
#define SPECIAL_DEFINED     0b0110110 ///< Defined ≡

// Defines for PORTA and C independently.
#define SPECIAL_BLANK_A 0x70
#define SPECIAL_BLANK_C 0x35
#define SPECIAL_SPACE_A 0x70
#define SPECIAL_SPACE_C 0x35
#define SPECIAL_UNDERSCORE_A 0x50
#define SPECIAL_UNDERSCORE_C 0x35
#define SPECIAL_OVERSCORE_A 0x70
#define SPECIAL_OVERSCORE_C 0x25
#define SPECIAL_HYPHEN_A 0x70
#define SPECIAL_HYPHEN_C 0x34
#define SPECIAL_EQUALS_A 0x50
#define SPECIAL_EQUALS_C 0x34
#define SPECIAL_DEFINED_A 0x50
#define SPECIAL_DEFINED_C 0x24

#define SPECIAL_SEG_A       0b0111111 ///< Segment A only
#define SPECIAL_SEG_B       0b1011111 ///< Segment B only
#define SPECIAL_SEG_C       0b1101111 ///< Segment C only
#define SPECIAL_SEG_D       0b1110111 ///< Segment D only
#define SPECIAL_SEG_E       0b1111011 ///< Segment E only
#define SPECIAL_SEG_F       0b1111101 ///< Segment F only
#define SPECIAL_SEG_G       0b1111110 ///< Segment G only

#define SPECIAL_SEG_A_A 0x70
#define SPECIAL_SEG_A_C 0x25
#define SPECIAL_SEG_B_A 0x70
#define SPECIAL_SEG_B_C 0x15
#define SPECIAL_SEG_C_A 0x60
#define SPECIAL_SEG_C_C 0x35
#define SPECIAL_SEG_D_A 0x50
#define SPECIAL_SEG_D_C 0x35
#define SPECIAL_SEG_E_A 0x30
#define SPECIAL_SEG_E_C 0x35
#define SPECIAL_SEG_F_A 0x70
#define SPECIAL_SEG_F_C 0x31
#define SPECIAL_SEG_G_A 0x70
#define SPECIAL_SEG_G_C 0x34

/** \} */ // font_special
/** \} */ // font

#endif //_FONT_H_
