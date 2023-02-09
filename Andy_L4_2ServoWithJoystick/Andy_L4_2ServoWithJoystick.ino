/*
 * This code will take values from joysticks and write it to 2 servo motors. 
 * One servo motor will recieve values from the X axis on the joystick.
 * The other servo motor will recieve values from the Y axis on the joystick.
 */
 
#include <Servo.h> //includes Servo library into code

Servo Xservo;  //links servo to "Xservo" variable
Servo Yservo;  //links servo to "Yservo" variable

int Xjoy = 0; //set variable "Xjoy" to the pin that is would read from
int Yjoy = 1; //set variable "Yjoy" to the pin that is would read from
int valueX;   //sets variable "valueX" to hold values in the code
int valueY;   //sets variable "valueY" to hold values in the code

void setup() {
  Xservo.attach(9);  //attaches Xservo to pin 9
  Yservo.attach(8);  //attaches Yservo to pin 8

void loop() {
  valueX = analogRead(Xjoy); //tells "valueX" to read the values from analog pin 0
  valueX = map(valueX, 0, 1023, 0, 180); //maps the values from Xjoy (0-1023) to 0-180
  Xservo.write(valueX); //writes values from the Xjoy to the servo
  delay(15); //delay to reduce bouncing

  valueY = analogRead(Yjoy); //tells "valueY" to read the values from analog pin 0
  valueY = map(valueY, 0, 1023, 0, 180); //maps the values from Yjoy (0-1023) to 0-180
  Yservo.write(valueY); //writes values from the Yjoy to the servo
  delay(15); //delay to reduce bouncing
  }
  
