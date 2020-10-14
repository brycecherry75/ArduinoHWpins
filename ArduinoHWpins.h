/*

  ArduinoHWpins, for mapping hardware pin labels to Arduino pin labels by Bryce Cherry

*/

#ifndef ArduinoHWpins_h
#define ArduinoHWpins_h

#include <Arduino.h>

// Uno or derivatives
#if defined(__AVR_ATmega328P__) || defined(__AVR_ATmega168__) || defined(__AVR_ATmega88__) || defined(__AVR_ATmega48__) || defined(__AVR_ATmega8__)

const byte PB_0 = 8;
const byte PB_1 = 9;
const byte PB_2 = 10;
const byte PB_3 = 11;
const byte PB_4 = 12;
const byte PB_5 = 13;
const byte PC_0 = A0;
const byte PC_1 = A1;
const byte PC_2 = A2;
const byte PC_3 = A3;
const byte PC_4 = A4;
const byte PC_5 = A5;
const byte PD_0 = 0;
const byte PD_1 = 1;
const byte PD_2 = 2;
const byte PD_3 = 3;
const byte PD_4 = 4;
const byte PD_5 = 5;
const byte PD_6 = 6;
const byte PD_7 = 7;

// Mega or derivatives
#elif defined(__AVR_ATmega1280__) || defined(__AVR_ATmega2560__)

const byte PA_0 = 22;
const byte PA_1 = 23;
const byte PA_2 = 24;
const byte PA_3 = 25;
const byte PA_4 = 26;
const byte PA_5 = 27;
const byte PA_6 = 28;
const byte PA_7 = 29;
const byte PB_0 = 53;
const byte PB_1 = 52;
const byte PB_2 = 51;
const byte PB_3 = 50;
const byte PB_4 = 10;
const byte PB_5 = 11;
const byte PB_6 = 12;
const byte PB_7 = 13;
const byte PC_0 = 37;
const byte PC_1 = 36;
const byte PC_2 = 35;
const byte PC_3 = 34;
const byte PC_4 = 33;
const byte PC_5 = 32;
const byte PC_6 = 31;
const byte PC_7 = 30;
const byte PD_0 = 21;
const byte PD_1 = 20;
const byte PD_2 = 19;
const byte PD_3 = 18;
const byte PD_7 = 38;
const byte PE_0 = 0;
const byte PE_1 = 1;
const byte PE_3 = 5;
const byte PE_4 = 3;
const byte PE_5 = 4;
const byte PF_0 = A0;
const byte PF_1 = A1;
const byte PF_2 = A2;
const byte PF_3 = A3;
const byte PF_4 = A4;
const byte PF_5 = A5;
const byte PF_6 = A6;
const byte PF_7 = A7;
const byte PG_0 = 41;
const byte PG_1 = 40;
const byte PG_2 = 39;
const byte PG_5 = 4;
const byte PH_0 = 17;
const byte PH_1 = 16;
const byte PH_3 = 6;
const byte PH_4 = 7;
const byte PH_5 = 8;
const byte PH_6 = 9;
const byte PJ_0 = 14;
const byte PJ_1 = 15;
const byte PK_0 = A8;
const byte PK_1 = A9;
const byte PK_2 = A10;
const byte PK_3 = A11;
const byte PK_4 = A12;
const byte PK_5 = A13;
const byte PK_6 = A14;
const byte PK_7 = A15;
const byte PL__0 = 49;
const byte PL__1 = 48;
const byte PL__2 = 47;
const byte PL__3 = 46;
const byte PL__4 = 45;
const byte PL__5 = 44;
const byte PL__6 = 43;
const byte PL__7 = 42;

// Leonardo or derivatives
#elif defined(__AVR_ATmega16U4__) || defined(__AVR_ATmega32U4__)

const byte PB_4 = 8;
const byte PB_5 = 9;
const byte PB_6 = 10;
const byte PB_7 = 11;
const byte PC_6 = 5;
const byte PC_7 = 13;
const byte PD_0 = 3;
const byte PD_1 = 2;
const byte PD_2 = 0;
const byte PD_3 = 1;
const byte PD_4 = 4;
const byte PD_6 = 12;
const byte PD_7 = 6;
const byte PE_6 = 7;
const byte PF_0 = A5;
const byte PF_1 = A4;
const byte PF_4 = A3;
const byte PF_5 = A2;
const byte PF_6 = A1;
const byte PF_7 = A0;

// ATtiny25/45/85 e.g. Gemma
#elif defined(__AVR_ATtiny25__) || defined(__AVR_ATtiny45__) || defined(__AVR_ATtiny85__)

const byte PB_0 = 0;
const byte PB_1 = 1;
const byte PB_2 = 2;
const byte PB_3 = 3;
const byte PB_4 = 4;
const byte PB_5 = 5;

// Arduino Zero and derivatives
#elif defined(ARDUINO_SAMD_ZERO)

const byte PA_2 = A0;
const byte PA_4 = A3;
const byte PA_5 = A4;
const byte PA_6 = 8;
const byte PA_7 = 9;
const byte PA_8 = 4;
const byte PA_9 = 3;
const byte PA_10 = 1;
const byte PA_11 = 0;
const byte PA_14 = 2;
const byte PA_15 = 5;
const byte PA_16 = 11;
const byte PA_17 = 13;
const byte PA_18 = 10;
const byte PA_19 = 12;
const byte PA_20 = 6;
const byte PA_21 = 7;
const byte PB_02 = A5;
const byte PB_08 = A1;
const byte PB_09 = A2;

// Arduino Due and derivatives
#elif defined(ARDUINO_SAM_DUE)

const byte PA_2 = A7;
const byte PA_3 = A6;
const byte PA_4 = A5;
const byte PA_6 = A4;
const byte PA_7 = 31;
const byte PA_8 = 0;
const byte PA_9 = 1;
const byte PA_10 = 19;
const byte PA_11 = 18;
const byte PA_12 = 17;
const byte PA_13 = 16;
const byte PA_14 = 23;
const byte PA_15 = 24;
const byte PA_16 = A0;
const byte PA_19 = 42;
const byte PA_20 = 43;
const byte PA_22 = A3;
const byte PA_23 = A2;
const byte PA_24 = A1;
const byte PA_28 = 10;
const byte PA_29 = 4;
const byte PB_12 = 21;
const byte PB_13 = 20;
const byte PB_14 = 53;
const byte PB_17 = A8;
const byte PB_18 = A9;
const byte PB_19 = A10;
const byte PB_20 = A11;
const byte PB_21 = 52;
const byte PB_25 = 2;
const byte PB_26 = 22;
const byte PB_27 = 13;
const byte PC_1 = 33;
const byte PC_2 = 34;
const byte PC_3 = 35;
const byte PC_4 = 36;
const byte PC_5 = 37;
const byte PC_6 = 38;
const byte PC_7 = 39;
const byte PC_8 = 40;
const byte PC_9 = 41;
const byte PC_12 = 51;
const byte PC_13 = 50;
const byte PC_14 = 49;
const byte PC_15 = 48;
const byte PC_16 = 47;
const byte PC_17 = 46;
const byte PC_18 = 45;
const byte PC_19 = 44;
const byte PC_21 = 9;
const byte PC_22 = 8;
const byte PC_23 = 7;
const byte PC_24 = 6;
const byte PC_25 = 5;
const byte PC_28 = 3;
const byte PD_0 = 25;
const byte PD_1 = 26;
const byte PD_2 = 27;
const byte PD_3 = 28;
const byte PD_4 = 14;
const byte PD_5 = 15;
const byte PD_6 = 29;
const byte PD_7 = 10;
const byte PD_8 = 11;
const byte PD_9 = 30;
const byte PD_10 = 32;

#else
#error Unsupported chip, PL__ease edit ArduinoHWpins library with hardware pin labels corresponding to Arduino pins
#endif

#endif