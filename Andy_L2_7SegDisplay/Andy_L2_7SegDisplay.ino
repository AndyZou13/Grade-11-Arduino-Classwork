/*
   This code runs the 7-seg and display the numbers 0-9
*/


int a = 2; //initiaize the specified variable to the defined interger
int b = 3;
int c = 4;
int d = 5;
int e = 6;
int f = 7;
int g = 8;

void setup() {
  pinMode (a, OUTPUT); //assignes the given pin number to output
  pinMode (b, OUTPUT);
  pinMode (c, OUTPUT);
  pinMode (d, OUTPUT);
  pinMode (e, OUTPUT);
  pinMode (f, OUTPUT);
  pinMode (g, OUTPUT);
}
void clearAll()
{
  digitalWrite (a, HIGH); //sends a specified signal (HIGH or LOW) to the port
  digitalWrite (b, HIGH);
  digitalWrite (c, HIGH);
  digitalWrite (d, HIGH);
  digitalWrite (e, HIGH);
  digitalWrite (f, HIGH);
  digitalWrite (g, HIGH);
}
void digitZero() //sets up the function with a name assigned to it
{
  clearAll(); //calls clearAll function
  digitalWrite(a, LOW);//sends a specified signal (HIGH or LOW) to the port
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
  digitalWrite(d, LOW);
  digitalWrite(e, LOW);
  digitalWrite(f, LOW);
}

void digitOne() //sets up the function with a name assigned to it
{
  clearAll();//calls clearAll function
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
}

void digitTwo() //sets up the function with a name assigned to it
{
  clearAll();//calls clearAll function
  digitalWrite(a, LOW);
  digitalWrite(b, LOW);
  digitalWrite(d, LOW);
  digitalWrite(e, LOW);
  digitalWrite(g, LOW);
}

void digitThree() //sets up the function with a name assigned to it
{
  clearAll();//calls clearAll function
  digitalWrite(a, LOW);
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
  digitalWrite(d, LOW);
  digitalWrite(g, LOW);
}

void digitFour() //sets up the function with a name assigned to it
{
  clearAll();//calls clearAll function
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
  digitalWrite(f, LOW);
  digitalWrite(g, LOW);
}

void digitFive() //sets up the function with a name assigned to it
{
  clearAll();//calls clearAll function
  digitalWrite(a, LOW);
  digitalWrite(c, LOW);
  digitalWrite(d, LOW);
  digitalWrite(f, LOW);
  digitalWrite(g, LOW);
}

void digitSix() //sets up the function with a name assigned to it
{
  clearAll();//calls clearAll function
  digitalWrite(c, LOW);
  digitalWrite(d, LOW);
  digitalWrite(e, LOW);
  digitalWrite(f, LOW);
  digitalWrite(g, LOW);
}

void digitSeven() //sets up the function with a name assigned to it
{
  clearAll();//calls clearAll function
  digitalWrite(a, LOW);
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
}

void digitEight() //sets up the function with a name assigned to it
{
  clearAll();//calls clearAll function
  digitalWrite(a, LOW);
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
  digitalWrite(d, LOW);
  digitalWrite(e, LOW);
  digitalWrite(f, LOW);
  digitalWrite(g, LOW);
}

void digitNine() //sets up the function with a name assigned to it
{
  clearAll();//calls clearAll function
  digitalWrite(a, LOW);
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
  digitalWrite(d, LOW);
  digitalWrite(f, LOW);
  digitalWrite(g, LOW);
}
void loop() {
  digitZero(); //calls the specified function
  delay (1000); //delay 1 second to make the display light up
  digitOne();
  delay (1000);
  digitTwo();
  delay (1000);
  digitThree();
  delay (1000);
  digitFour();
  delay (1000);
  digitFive();
  delay (1000);
  digitSix();
  delay (1000);
  digitSeven();
  delay (1000);
  digitEight();
  delay (1000);
  digitNine();
  delay (1000);
}
