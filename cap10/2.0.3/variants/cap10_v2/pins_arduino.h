#ifndef Pins_Arduino_h
#define Pins_Arduino_h

#include <stdint.h>

#define EXTERNAL_NUM_INTERRUPTS 16
#define NUM_DIGITAL_PINS        40
#define NUM_ANALOG_INPUTS       16

#define analogInputToDigitalPin(p)  (((p)<20)?(analogChannelToDigitalPin(p)):-1)
#define digitalPinToInterrupt(p)    (((p)<40)?(p):-1)
#define digitalPinHasPWM(p)         (p < 34)

static const uint8_t TX = 1;
static const uint8_t RX = 3;

static const uint8_t SDA = 21;
static const uint8_t SCL = 22;

static const uint8_t SS    = 5;
static const uint8_t MOSI  = 23;
static const uint8_t MISO  = 19;
static const uint8_t SCK   = 18;

static const uint8_t A0 = 36;
static const uint8_t A3 = 39;
static const uint8_t A4 = 32;
static const uint8_t A5 = 33;
static const uint8_t A6 = 34;
static const uint8_t A7 = 35;
static const uint8_t A10 = 4;
static const uint8_t A11 = 0;
static const uint8_t A12 = 2;
static const uint8_t A13 = 15;
static const uint8_t A14 = 13;
static const uint8_t A15 = 12;
static const uint8_t A16 = 14;
static const uint8_t A17 = 27;
static const uint8_t A18 = 25;
static const uint8_t A19 = 26;

static const uint8_t T0 = 4;
static const uint8_t T1 = 0;
static const uint8_t T2 = 2;
static const uint8_t T3 = 15;
static const uint8_t T4 = 13;
static const uint8_t T5 = 12;
static const uint8_t T6 = 14;
static const uint8_t T7 = 27;
static const uint8_t T8 = 33;
static const uint8_t T9 = 32;

static const uint8_t DAC1 = 25;
static const uint8_t DAC2 = 26;


/* User-Defined Pins */
static const uint8_t SW1 = 0;
static const uint8_t SW2 = 32;
static const uint8_t SW3 = 35;
static const uint8_t SW4 = 34;

static const uint8_t P1 = 13;
static const uint8_t P2 = 15;
static const uint8_t P3 = 2;
static const uint8_t P4 = 4;
static const uint8_t P5 = 18;
static const uint8_t P6 = 17;
static const uint8_t P7 = 16;
static const uint8_t P8 = 5;

static const uint8_t M1A = 25;
static const uint8_t M1B = 33;
static const uint8_t M2A = 27;
static const uint8_t M2B = 26;

static const uint8_t SRV1 = 12;
static const uint8_t SRV2 = 14;

static const uint8_t LED_BUILTIN = 19;

#endif /* Pins_Arduino_h */
