/*
 * This code will read the digital values from pin 2 and will print it to
 * a serial monitor
 */
int pushButton = 2; //initializing the variable to the pin number
void setup() {
Serial.begin(9600); //setting up serial monitor
}

void loop() {
int buttonState = digitalRead(pushButton); //initializing variable to the values coming from the digitalRead
Serial.println(buttonState); //prints values from variable to the serial monitor
delay (1); //delay to decrease bouncing
}
