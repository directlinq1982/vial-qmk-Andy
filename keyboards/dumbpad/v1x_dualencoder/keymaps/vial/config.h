#pragma once
#define VIAL_KEYBOARD_UID {0x49, 0x6B, 0x7A, 0xA8, 0x6C, 0x78, 0xF6, 0x21}

#undef DYNAMIC_KEYMAP_LAYER_COUNT
#define DYNAMIC_KEYMAP_LAYER_COUNT 5

#define VIAL_TAP_DANCE_ENTRIES 10
#define VIAL_COMBO_ENTRIES 10

#define DYNAMIC_KEYMAP_MACRO_COUNT 20
/* 500 bytes allows for exactly 500 characters total across all 20 macros */
#define DYNAMIC_KEYMAP_MACRO_EEPROM_SIZE 500 

#define VIAL_UNLOCK_COMBO_ROWS { 0, 0 }
#define VIAL_UNLOCK_COMBO_COLS { 0, 1 }

#undef ENCODERS_PAD_A
#undef ENCODERS_PAD_B

/* Replace the ?? with the actual Pro Micro pins your right encoder is wired to */
#define ENCODERS_PAD_A { F5, D4 } 
#define ENCODERS_PAD_B { F4, D3 }
