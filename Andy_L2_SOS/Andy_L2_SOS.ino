/*
 * S.O.S
 * LED will blink for 3 Long blinks, 3 short blinks followed by 3 long blinks
 */

int led = 13;  // assigned pin 13 to LED


void setup() {
  pinMode(led, OUTPUT);  // set pin 13 to be output
}

void loop() {
  digitalWrite(led, HIGH); // Turns LED on and delays for 400ms
  delay(400);
  digitalWrite(led, LOW); // Turns LED off and delays for 400ms
  delay(400);
  
  digitalWrite(led, HIGH); 
  delay(400);
  digitalWrite(led, LOW); 
  delay(400);
  
  digitalWrite(led, HIGH); 
  delay(400);
  digitalWrite(led, LOW); 
  delay(400);

  digitalWrite(led, HIGH); // Turns LED on and delays for 1 second
  delay(1000);
  digitalWrite(led, LOW); // Turns LED off and delays for 1 second
  delay(1000);
  
  digitalWrite(led, HIGH); 
  delay(1000);
  digitalWrite(led, LOW); 
  delay(1000);

  digitalWrite(led, HIGH); 
  delay(1000);
  digitalWrite(led, LOW); 
  delay(1000);

  digitalWrite(led, HIGH); // Turns LED on and delays for 200ms
  delay(400);
  digitalWrite(led, LOW); // Turns LED off and delays for 200ms
  delay(400);
  
  digitalWrite(led, HIGH); 
  delay(400);
  digitalWrite(led, LOW); 
  delay(400);
  
  digitalWrite(led, HIGH); 
  delay(400);
  digitalWrite(led, LOW); 
  delay(3000); // delay for 3 seconds before restarting the loop

}
