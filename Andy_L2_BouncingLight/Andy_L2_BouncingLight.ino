/*
 * LED squences
 * The LED will light up in order from left to right and bounce back from
 * right to left
 */

int led1 = 2; //setting pin number to an integer
int led2 = 3;
int led3 = 4;
int led4 = 5;
int led5 = 6;
int led6 = 7;
int led7 = 8;
int led8 = 9;

void setup() {
  // put your setup code here, to run once:
pinMode(led1, OUTPUT); //setting the specified pin number to be output
pinMode(led2, OUTPUT);
pinMode(led3, OUTPUT);
pinMode(led4, OUTPUT);
pinMode(led5, OUTPUT);
pinMode(led6, OUTPUT);
pinMode(led7, OUTPUT);
pinMode(led8, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(led1, HIGH); // Turns the specified LED on
delay (100); // Delay is set to turn on the LEDs at different times
digitalWrite(led2, HIGH);
delay (100);
digitalWrite(led3, HIGH);
delay (100);
digitalWrite(led4, HIGH);
delay (100);
digitalWrite(led5, HIGH);
delay (100);
digitalWrite(led6, HIGH);
delay (100);
digitalWrite(led7, HIGH);
delay (100);
digitalWrite(led8, HIGH);
delay (100);
digitalWrite(led1, LOW); //Turns specified LED off
delay (100); //delay before turning it back on
digitalWrite(led2, LOW);
delay (100);
digitalWrite(led3, LOW);
delay (100);
digitalWrite(led4, LOW);
delay (100);
digitalWrite(led5, LOW);
delay (100);
digitalWrite(led6, LOW);
delay (100);
digitalWrite(led7, LOW);
delay (100);
digitalWrite(led8, LOW);
delay (100);

digitalWrite(led8, HIGH); // Turns the specified LED on
delay (100); // Delay is set to turn on the LEDs at different times
digitalWrite(led7, HIGH);
delay (100);
digitalWrite(led6, HIGH);
delay (100);
digitalWrite(led5, HIGH);
delay (100);
digitalWrite(led4, HIGH);
delay (100);
digitalWrite(led3, HIGH);
delay (100);
digitalWrite(led2, HIGH);
delay (100);
digitalWrite(led1, HIGH);
delay (100);
digitalWrite(led8, LOW); //Turns specified LED off
delay (100); //delay before turning it back on
digitalWrite(led7, LOW);
delay (100);
digitalWrite(led6, LOW);
delay (100);
digitalWrite(led5, LOW);
delay (100);
digitalWrite(led4, LOW);
delay (100);
digitalWrite(led3, LOW);
delay (100);
digitalWrite(led2, LOW);
delay (100);
digitalWrite(led1, LOW);
delay (100);

}
