/*
 * This code will read the analog values from a variable resistor
 */
void setup() {
Serial.begin(9600); //setting up a serial monitor output
}

void loop() {
int sensorValue = analogRead(A0); //intializes the variable "sersorValue" to the values from the analogRead
Serial.println(sensorValue); //serial prints the values from the variable
delay (1); //delay to decrease bouncing
}
