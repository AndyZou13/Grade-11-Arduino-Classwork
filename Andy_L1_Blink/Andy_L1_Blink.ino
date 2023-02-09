/*
 * This code will turn the LED on, delay for 1 second,turn the LED off, delay for 1 second
 * and repeats the cycle
 */

void setup() {
pinMode (LED_BUILTIN, OUTPUT); //setting the builtin LED to be output
}

void loop() {
digitalWrite (LED_BUILTIN, HIGH); //sending HIGH value to LED to turn it on
delay (1000); //delay to keep LED on
digitalWrite (LED_BUILTIN, LOW); //sending LOW value to LED to turn it off
delay (1000); //delay to keep LED off
}
