/*
 * This code will display ANDY in order on the 7Seg display
 */


int a = 2; //Setting up the integers with the corresponding pin numbers
int b = 3;
int c = 4;
int d = 5;
int e = 6;
int f = 7;
int g = 8;

void setup() {
  pinMode (a, OUTPUT); //set specified pin number to be output
  pinMode (b, OUTPUT);
  pinMode (c, OUTPUT);
  pinMode (d, OUTPUT);
  pinMode (e, OUTPUT);
  pinMode (f, OUTPUT);
  pinMode (g, OUTPUT);
}
void clearAll() //creating function clearAll to turn all lights off
{
  digitalWrite (a, HIGH); //anode 7 seg needs power to turn off LED
  digitalWrite (b, HIGH);
  digitalWrite (c, HIGH);
  digitalWrite (d, HIGH);
  digitalWrite (e, HIGH);
  digitalWrite (f, HIGH);
  digitalWrite (g, HIGH);
}
void letterA(){
  clearAll(); //turning all LEDs off before powering certain ones on
  digitalWrite (a, LOW); //turning on specified LED to display specified letter
  digitalWrite (b, LOW);
  digitalWrite (c, LOW);
  digitalWrite (e, LOW);
  digitalWrite (f, LOW);
  digitalWrite (g, LOW);
}
void letterN(){
  clearAll();
  digitalWrite (c, LOW);
  digitalWrite (e, LOW);
  digitalWrite (g, LOW);
}
void letterD(){
  clearAll();
  digitalWrite (b, LOW);
  digitalWrite (c, LOW);
  digitalWrite (d, LOW);
  digitalWrite (e, LOW);
  digitalWrite (g, LOW);
}
void letterY(){
  clearAll();
  digitalWrite (b, LOW);
  digitalWrite (c, LOW);
  digitalWrite (d, LOW);
  digitalWrite (f, LOW);
  digitalWrite (g, LOW);
}

void loop() { //looping command
letterA(); //calling function letterA
delay (1000); //delay 1 second before next letter appears
letterN(); //calling function letterN
delay (1000);
letterD(); //calling function letterD
delay (1000);
letterY(); //calling function letterY
delay (1000);
}
