/*
 * Library for CAP10 board that can be used in Arduino IDE
 * Author           - Asutosh Pati
 * Created On       - 12 November 2021
 * Last Updated On  - 12 November 2021
 */

#ifndef CAP10_H
#define CAP10_H
#include <Arduino.h>

/*
 * Map board pins with ESP32 pins
 */
#define P1 4
#define P2 5
#define P3 19
#define P4 18
#define P5 17
#define P6 12
#define P7 2
#define P8 27
#define M1_T 13   // TOP pin for M1
#define M1_B 14   // BOTTOM pin for M1
#define M2_T 15   // TOP pin for M2
#define M2 B 16   // BOTTOM pin for M2
#define S1 32     // Servo pin 1
#define S2 33     // Servo pin 2

/*
 * Define library functions
 */
int add2nums(int num1, int num2);

#endif