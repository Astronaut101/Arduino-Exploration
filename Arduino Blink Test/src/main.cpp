/**
* Blink
* 
* Turns on an LED on for half a second,
* then off for one second, repeatedly.
*/
#include <Arduino.h>

// Set LED_BUILTIN if it is not defined by Arduino framework
// # define LED_BUILTIN 13

void setup() 
{
  // put your setup code here, to run once:
  // Initialize LED digital pin as an output.
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() 
{
  // put your main code here, to run repeatedly:
  // turn the LED on (HIGH is the voltage level)
  digitalWrite(LED_BUILTIN, HIGH);

  // wait for a half a second
  delay(500);

  // turn the LED off by making the voltage LOW
  digitalWrite(LED_BUILTIN, LOW);

  // wait for half a second
  delay(500);
}