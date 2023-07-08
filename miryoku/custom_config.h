// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku

#define MIRYOKU_LAYER_SYM \
&kp SQT,          &kp LESS_THAN,          &kp GREATER_THAN,         &kp DQT,          &kp DOT,          &kp AMPERSAND,              &kp SQT,      &kp RIGHT_BRACKET,     &kp LEFT_BRACKET,       &kp PERCENT,            \
&kp EXCL,         &kp MINUS,          &kp PLUS,         &kp EQUAL,         &kp HASH,          &kp PIPE,              &kp COLON,         &kp RIGHT_PARENTHESIS,         &kp LEFT_PARENTHESIS,          &kp QUESTION,          \
&kp CARET,         &kp SLASH,          &kp ASTERISK,            &kp BACKSLASH,          &kp GRAVE,          &kp TILDE,              &kp DOLLAR,       &kp RIGHT_BRACE,     &kp LEFT_BRACE,          &kp AT,              \
U_NP,              U_NP,              &kp LPAR,          &kp RPAR,          &kp UNDER,         U_NA,              U_NA,              U_NA,              U_NP,              U_NP

#if !defined (MIRYOKU_KEYBOARD_CORNE)

#define XXX &none

#define MIRYOKU_LAYERMAPPING_SYM( \
     K00, K01, K02, K03, K04,      K05, K06, K07, K08, K09, \
     K10, K11, K12, K13, K14,      K15, K16, K17, K18, K19, \
     K20, K21, K22, K23, K24,      K25, K26, K27, K28, K29, \
     N30, N31, K32, K33, K34,      K35, K36, K37, N38, N39 \
) \
&kp SQT,          &kp LESS_THAN,          &kp GREATER_THAN,         &kp DQT,          &kp DOT,          &kp AMPERSAND,              &kp SQT,      &kp RIGHT_BRACKET,     &kp LEFT_BRACKET,       &kp PERCENT,            \
&kp EXCL,         &kp MINUS,          &kp PLUS,         &kp EQUAL,         &kp HASH,          &kp PIPE,              &kp COLON,         &kp RIGHT_PARENTHESIS,         &kp LEFT_PARENTHESIS,          &kp QUESTION,          \
&kp CARET,         &kp SLASH,          &kp ASTERISK,            &kp BACKSLASH,          &kp GRAVE,          &kp TILDE,              &kp DOLLAR,       &kp RIGHT_BRACE,     &kp LEFT_BRACE,          &kp AT,              \
U_NP,              U_NP,              &kp LPAR,          &kp RPAR,          &kp UNDER,         U_NA,              U_NA,              U_NA,              U_NP,              U_NP

#define MIRYOKU_KLUDGE_TOPROWCOMBOS_LEFTPINKIE 2 3
#define MIRYOKU_KLUDGE_TOPROWCOMBOS_LEFTINNERINDEX 3 4
#define MIRYOKU_KLUDGE_TOPROWCOMBOS_RIGHTINNERINDEX 7 8
#define MIRYOKU_KLUDGE_TOPROWCOMBOS_RIGHTPINKIE 8 9

#define MIRYOKU_KLUDGE_BOTTOMROWCOMBOS_LEFTPINKIE 26 27
#define MIRYOKU_KLUDGE_BOTTOMROWCOMBOS_LEFTINNERINDEX 27 28
#define MIRYOKU_KLUDGE_BOTTOMROWCOMBOS_RIGHTINNERINDEX 31 32
#define MIRYOKU_KLUDGE_BOTTOMROWCOMBOS_RIGHTPINKIE 32 33

#define MIRYOKU_KLUDGE_THUMBCOMBOS_LEFT 37 38
#define MIRYOKU_KLUDGE_THUMBCOMBOS_RIGHT 39 40

#endif




