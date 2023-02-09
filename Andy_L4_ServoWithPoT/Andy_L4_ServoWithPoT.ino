/*
 * This code will take potentiometer values and map it to values that the servo motor
 * is more compatible with.
 */
#include <Servo.h> //includes Servo library into code

Servo servo;  //links servo to "servo" variable

int potpin = 0; //set variable "potpin" to the pin that is would read from
int value;   //sets variable "value" to hold values in the code

void setup() {
  servo.attach(9);  //attaches servo to pin 9
}

void loop() {
  value = analogRead(potpin); //tells "value" to read the values from analog pin 0
  value = map(value, 0, 1023, 0, 180); //maps the values from POT (0-1023) to 0-180
  servo.write(value); //writes values from the POT to the servo
  delay(15); //delay to reduce bouncing
  }
  
