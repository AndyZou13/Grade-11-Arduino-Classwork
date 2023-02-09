/*
 * This code fades an LED at a set speed
 */

int led = 9; //initializes the variable to be certain values or certain pins
int brightness = 0;   
int fadeAmount = 5;    

void setup() {
  pinMode(led, OUTPUT); //setting pin 9 to be output
}

void loop() {

  analogWrite(led, brightness); // Writes to variable which from another variable

  brightness = brightness + fadeAmount; //adds the set value to the brightness

  if (brightness <= 0 || brightness >= 255) { //ir the brightness value is greater than 255 or less than 0 then run the next set of code
    fadeAmount = -fadeAmount; //negative fade to fade out LED
  }
  delay(30);//delay to see LED light
}
