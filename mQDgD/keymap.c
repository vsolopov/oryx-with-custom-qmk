#include QMK_KEYBOARD_H
#include "version.h"
#define MOON_LED_LEVEL LED_LEVEL
#define ML_SAFE_RANGE SAFE_RANGE

enum custom_keycodes {
  RGB_SLD = ML_SAFE_RANGE,
  ST_MACRO_0,
  ST_MACRO_1,
};


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_moonlander(
    KC_ESCAPE,      KC_1,           KC_2,           KC_3,           KC_4,           KC_5,           TG(3),                                          KC_LBRC,        KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_MINUS,       
    KC_GRAVE,       KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,           LALT(LGUI(LCTL(KC_H))),                                KC_RBRC,        KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           KC_EQUAL,       
    KC_TAB,         KC_A,           KC_S,           KC_D,           KC_F,           KC_G,           KC_BSPC,                                                                        KC_BSPC,        KC_H,           KC_J,           KC_K,           KC_L,           KC_SCLN,        KC_QUOTE,       
    KC_LEFT_SHIFT,  KC_Z,           KC_X,           KC_C,           KC_V,           KC_B,                                           KC_N,           KC_M,           KC_COMMA,       KC_DOT,         KC_SLASH,       KC_TRANSPARENT, 
    ST_MACRO_0,     KC_LEFT_CTRL,   KC_LEFT_ALT,    KC_LEFT_GUI,    KC_TRANSPARENT, LGUI(LCTL(LSFT(KC_4))),                                                                                                LCTL(KC_GRAVE), KC_MEDIA_PREV_TRACK,KC_MEDIA_NEXT_TRACK,KC_AUDIO_VOL_DOWN,KC_AUDIO_VOL_UP,KC_AUDIO_MUTE,  
    OSL(1),         KC_LEFT_SHIFT,  OSL(2),                         OSL(2),         KC_ENTER,       KC_SPACE
  ),
  [1] = LAYOUT_moonlander(
    LGUI(KC_W),     KC_EXLM,        KC_AT,          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_DELETE,      KC_LABK,        KC_RABK,        KC_LPRN,        KC_RPRN,        KC_GRAVE,       KC_AT,          
    KC_TRANSPARENT, KC_TRANSPARENT, LCTL(KC_W),     LCTL(KC_E),     LCTL(KC_R),     LCTL(KC_T),     KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_LCBR,        KC_RCBR,        KC_LBRC,        KC_RBRC,        KC_MINUS,       KC_PLUS,        
    OSL(2),         LCTL(KC_A),     LCTL(KC_S),     LCTL(KC_D),     KC_BSPC,        LCTL(KC_G),     KC_TRANSPARENT,                                                                 LCTL(KC_U),     KC_LEFT,        KC_DOWN,        KC_UP,          KC_RIGHT,       KC_UNDS,        KC_DQUO,        
    KC_TRANSPARENT, KC_LEFT_CTRL,   LGUI(KC_N),     LCTL(KC_C),     KC_SPACE,       KC_ENTER,                                       KC_ASTR,        KC_HASH,        KC_CIRC,        KC_DLR,         KC_TILD,        KC_SCLN,        
    KC_TRANSPARENT, KC_TRANSPARENT, LCTL(KC_LEFT),  LCTL(KC_RIGHT), LCTL(KC_UP),    KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_AMPR,        KC_PIPE,        KC_PERC,        KC_EXLM,        KC_BSLS,        
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TAB
  ),
  [2] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,          KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_F6,          KC_F7,          KC_F8,          KC_F9,          KC_F10,         KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_7,           KC_8,           KC_9,           ST_MACRO_1,     KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_4,           KC_5,           KC_6,           KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_0,           KC_1,           KC_2,           KC_3,           KC_UP,                                          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_LEFT,        KC_RIGHT,       KC_DOWN,        KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [3] = LAYOUT_moonlander(
    QK_BOOT,        KC_F1,          MOON_LED_LEVEL, RGB_SLD,        RGB_MODE_FORWARD,TOGGLE_LAYER_COLOR,KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_F6,          KC_F7,          KC_F8,          KC_F9,          KC_F10,         KC_F11,         
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, RGB_HUD,        RGB_HUI,        TO(5),                                          KC_TRANSPARENT, KC_TRANSPARENT, KC_7,           KC_8,           KC_9,           KC_KP_ASTERISK, KC_F12,         
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, RGB_VAD,        RGB_VAI,        KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_4,           KC_5,           KC_6,           KC_KP_SLASH,    KC_EQUAL,       
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_1,           KC_2,           KC_3,           KC_KP_PLUS,     KC_ENTER,       
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_0,           KC_0,           KC_KP_DOT,      KC_KP_MINUS,    KC_ENTER,       
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [4] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_MS_WH_UP,    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_MS_LEFT,     KC_MS_DOWN,     KC_MS_UP,       KC_MS_RIGHT,    KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_MS_BTN1,     KC_MS_BTN3,     KC_MS_BTN2,     KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_MS_WH_LEFT,  KC_MS_WH_DOWN,  KC_MS_WH_RIGHT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [5] = LAYOUT_moonlander(
    // First row: Navigation shortcuts
    KC_TRANSPARENT,      // -
    LGUI(KC_O),         // Class: Go to class (⌘O)
    LGUI(LSFT(KC_O)),   // File: Go to file (⌘⇧O)
    LGUI(LALT(LSFT(KC_O))), // Symbol: Go to symbol (⌘⌥⇧O)
    KC_F7,              // StepIn: Step into (F7)
    KC_F8,              // StepOv: Step over (F8)
    TO(0),              // Base: Return to base layer
                                          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 

    // Second row: Navigation
    KC_TRANSPARENT,      // -
    LGUI(KC_LBRC),      // Back: Navigate back (⌘[)
    LGUI(KC_RBRC),      // Forw: Navigate forward (⌘])
    LGUI(KC_E),         // Recent: Recent files (⌘E)
    LGUI(KC_B),         // Decl: Go to declaration (⌘B)
    LGUI(LALT(KC_B)),   // Impl: Go to implementation (⌘⌥B)
    KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 

    // Third row: Editing
    KC_TRANSPARENT,      // -
    LGUI(KC_SLASH),     // Comm: Comment line (⌘/)
    LGUI(KC_D),         // Dupl: Duplicate line (⌘D)
    LGUI(KC_BSPC),      // DelLn: Delete line (⌘⌫)
    LGUI(LALT(KC_L)),   // Format: Reformat code (⌘⌥L)
    LCTL(LALT(KC_O)),   // Import: Optimize imports (⌃⌥O)
    KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 

    // Fourth row: Search
    KC_TRANSPARENT,      // -
    LGUI(KC_F),         // Find: Find (⌘F)
    LGUI(KC_R),         // Repl: Replace (⌘R)
    LGUI(LSFT(KC_F)),   // FindP: Find in path (⌘⇧F)
    LSFT(KC_F6),        // Rename: Rename (⇧F6)
    LGUI(LALT(KC_V)),   // Var: Extract Variable (⌘⌥V)
                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 

    // Fifth row: Run/Debug & Refactoring
    LCTL(KC_R),         // Run: Run (⌃R)
    LCTL(KC_D),         // Debug: Debug (⌃D)
    LGUI(KC_F8),        // Break: Toggle breakpoint (⌘F8)
    LGUI(LALT(KC_M)),   // Method: Extract Method (⌘⌥M)
    LGUI(LALT(KC_N)),   // Inline: Inline (⌘⌥N)
    KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 

    // Thumb cluster
    LCTL(LSFT(KC_SPACE)), // Smart: Smart completion (⌃⇧Space)
    KC_TRANSPARENT,      // -
    KC_TRANSPARENT,      // -
                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
};

extern rgb_config_t rgb_matrix_config;

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}


const uint8_t PROGMEM ledmap[][RGB_MATRIX_LED_COUNT][3] = {
    [1] = { {0,0,0}, {0,0,0}, {0,218,204}, {0,0,0}, {0,0,0}, {182,218,204}, {0,0,0}, {92,240,255}, {0,0,0}, {0,0,0}, {182,218,204}, {92,240,255}, {92,240,255}, {138,240,255}, {0,105,255}, {0,0,0}, {92,240,255}, {92,240,255}, {92,240,255}, {0,105,255}, {0,0,0}, {92,240,255}, {41,216,239}, {41,216,239}, {0,105,255}, {0,0,0}, {92,240,255}, {92,240,255}, {41,216,239}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {197,218,204}, {134,152,255}, {92,240,255}, {92,240,255}, {175,218,204}, {92,240,255}, {139,157,235}, {138,240,255}, {138,240,255}, {197,218,204}, {41,216,239}, {41,216,239}, {0,105,255}, {182,218,204}, {190,218,204}, {41,216,239}, {41,216,239}, {0,105,255}, {182,218,204}, {190,218,204}, {41,216,239}, {41,216,239}, {0,105,255}, {138,240,255}, {190,218,204}, {41,216,239}, {41,216,239}, {0,105,255}, {138,240,255}, {0,218,204}, {0,0,0}, {92,240,255}, {41,227,255}, {0,0,0}, {0,0,0}, {0,0,0} },

    [2] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {138,240,255}, {0,0,0}, {0,0,0}, {43,200,242}, {0,0,0}, {138,240,255}, {41,216,239}, {41,216,239}, {41,216,239}, {197,218,204}, {138,240,255}, {41,216,239}, {41,216,239}, {41,216,239}, {197,218,204}, {0,0,0}, {41,216,239}, {41,216,239}, {41,216,239}, {197,218,204}, {138,240,255}, {163,253,236}, {0,0,0}, {197,218,204}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {138,240,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {138,240,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {138,240,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {138,240,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {138,240,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [3] = { {0,108,255}, {0,0,0}, {0,0,0}, {0,0,0}, {98,150,217}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {131,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {131,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {131,255,255}, {131,255,255}, {131,255,255}, {0,0,0}, {0,0,0}, {131,255,255}, {131,255,255}, {131,255,255}, {0,0,0}, {0,0,0}, {0,218,204}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {98,150,217}, {41,255,255}, {41,255,255}, {0,0,0}, {98,150,217}, {98,150,217}, {98,150,217}, {98,150,217}, {0,0,0}, {41,255,255}, {41,255,255}, {41,255,255}, {98,150,217}, {0,0,0}, {41,255,255}, {41,255,255}, {41,255,255}, {41,255,255}, {0,0,0}, {41,255,255}, {41,255,255}, {41,255,255}, {41,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [4] = { {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255} },

};

void set_layer_color(int layer) {
  for (int i = 0; i < RGB_MATRIX_LED_COUNT; i++) {
    HSV hsv = {
      .h = pgm_read_byte(&ledmap[layer][i][0]),
      .s = pgm_read_byte(&ledmap[layer][i][1]),
      .v = pgm_read_byte(&ledmap[layer][i][2]),
    };
    if (!hsv.h && !hsv.s && !hsv.v) {
        rgb_matrix_set_color( i, 0, 0, 0 );
    } else {
        RGB rgb = hsv_to_rgb( hsv );
        float f = (float)rgb_matrix_config.hsv.v / UINT8_MAX;
        rgb_matrix_set_color( i, f * rgb.r, f * rgb.g, f * rgb.b );   
    }
  }
}

bool rgb_matrix_indicators_user(void) {
  if (rawhid_state.rgb_control) {
      return false;
  }
  if (keyboard_config.disable_layer_led) { return false; }
  switch (biton32(layer_state)) {
    case 1:
      set_layer_color(1);
      break;
    case 2:
      set_layer_color(2);
      break;
    case 3:
      set_layer_color(3);
      break;
    case 4:
      set_layer_color(4);
      break;
   default:
    if (rgb_matrix_get_flags() == LED_FLAG_NONE)
      rgb_matrix_set_color_all(0, 0, 0);
    break;
  }
  return true;
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case ST_MACRO_0:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_SPACE)));
    }
    break;
    case ST_MACRO_1:
    if (record->event.pressed) {
      SEND_STRING(SS_LGUI(SS_TAP(X_C))SS_DELAY(100)  SS_LGUI(SS_TAP(X_T))SS_DELAY(100)  SS_LGUI(SS_TAP(X_V))  SS_DELAY(100) SS_TAP(X_ENTER));
    }
    break;

    case RGB_SLD:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
        }
        return false;
  }
  return true;
}



