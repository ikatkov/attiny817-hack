/*
 * Blink
 * Turns on an LED on for one second,
 * then off for one second, repeatedly.
 */

#include <Arduino.h>

void setup()
{
    Serial.begin(9600);
    // initialize LED digital pin as an output.
    pinMode(PIN_PA5, OUTPUT);
}

void loop()
{
    Serial.println("Hello world!");
    // turn the LED on (HIGH is the voltage level)
    digitalWrite(PIN_PA5, HIGH);
    // wait for a second
    delay(1000);
    // turn the LED off by making the voltage LOW
    digitalWrite(PIN_PA5, LOW);
    // wait for a second
    delay(1000);
}