/*
 * This code will display the mapped value of the variable resistor with the numbers 0-9
 */


int a = 2; //initiaize the give variable to the defined interger
int b = 3;
int c = 4;
int d = 5;
int e = 6;
int f = 7;
int g = 8;

void setup() {
  pinMode (a, OUTPUT); //assigns the given pin number as INPUT or OUTPUT
  pinMode (b, OUTPUT);
  pinMode (c, OUTPUT);
  pinMode (d, OUTPUT);
  pinMode (e, OUTPUT);
  pinMode (f, OUTPUT);
  pinMode (g, OUTPUT);
  Serial.begin(9600);
}
void clearAll() //sets up a function to be called later on
{
  digitalWrite (a, HIGH); //turns all LEDs off on 7Seg display
  digitalWrite (b, HIGH);
  digitalWrite (c, HIGH);
  digitalWrite (d, HIGH);
  digitalWrite (e, HIGH);
  digitalWrite (f, HIGH);
  digitalWrite (g, HIGH);
}

void digitZero() //sets up function to be called in loop
    {
  clearAll(); //calls clearAll function
  digitalWrite(a, LOW); //turns on the specified LEDs on the 7Seg display
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
  digitalWrite(d, LOW);
  digitalWrite(e, LOW);
  digitalWrite(f, LOW);
    }

void digitOne()
    {
  clearAll(); //calls clearAll function
  digitalWrite(b, LOW); //turns on the specified LEDs on the 7Seg display
  digitalWrite(c, LOW);
    }

void digitTwo()
    {
  clearAll(); //calls clearAll function
  digitalWrite(a, LOW); //turns on the specified LEDs on the 7Seg display
  digitalWrite(b, LOW);
  digitalWrite(d, LOW);
  digitalWrite(e, LOW);
  digitalWrite(g, LOW);
    }

void digitThree()
    { 
  clearAll(); //calls clearAll function
  digitalWrite(a, LOW); //turns on the specified LEDs on the 7Seg display
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
  digitalWrite(d, LOW);
  digitalWrite(g, LOW);
    }

void digitFour()
    {
  clearAll(); //calls clearAll function
  digitalWrite(b, LOW); //turns on the specified LEDs on the 7Seg display
  digitalWrite(c, LOW);
  digitalWrite(f, LOW);
  digitalWrite(g, LOW);
    }

void digitFive()
    {
  clearAll(); //calls clearAll function
  digitalWrite(a, LOW); //turns on the specified LEDs on the 7Seg display
  digitalWrite(c, LOW);
  digitalWrite(d, LOW);
  digitalWrite(f, LOW);
  digitalWrite(g, LOW);
    }

void digitSix()
    {
  clearAll(); //calls clearAll function
  digitalWrite(c, LOW); //turns on the specified LEDs on the 7Seg display
  digitalWrite(d, LOW);
  digitalWrite(e, LOW);
  digitalWrite(f, LOW);
  digitalWrite(g, LOW);
    }

void digitSeven()
    {
  clearAll(); //calls clearAll function
  digitalWrite(a, LOW); //turns on the specified LEDs on the 7Seg display
  digitalWrite(b, LOW); 
  digitalWrite(c, LOW);
    }

void digitEight()
    {
  clearAll(); //calls clearAll function
  digitalWrite(a, LOW); //turns on the specified LEDs on the 7Seg display
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
  digitalWrite(d, LOW);
  digitalWrite(e, LOW);
  digitalWrite(f, LOW);
  digitalWrite(g, LOW);
    }

void digitNine()
    {
  clearAll(); //calls clearAll function
  digitalWrite(a, LOW); //turns on the specified LEDs on the 7Seg display
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
  digitalWrite(d, LOW);
  digitalWrite(f, LOW);
  digitalWrite(g, LOW);
    }
    
void loop() {
  int varres = analogRead (A0); //initializes a variable to a set integer value. In this case, it is assigned to the values from analog pin 0
  varres = map(varres, 0, 1023, 0, 10); //maps the values from the variable resistor to values that can be displayed on the 7Seg display
  Serial.println (varres); //prints to serial monitor the mapped values
  delay (1); //delay to reduce bounce
  if (varres ==0) { //if the mapped value is equal to or greater than the specificed value, then run the code below
    digitZero(); //calls the function that displays the number
  }
  if (varres >=1) {
    digitOne();
  }
  if (varres >=2) {
    digitTwo();
  }
  if (varres >=3) {
    digitThree();
  }
  if (varres >=4) {
    digitFour();
  }
  if (varres >=5) {
    digitFive();
  }
  if (varres >=6) {
    digitSix();
  }
  if (varres >=7) {
    digitSeven();
  }
  if (varres >=8) {
    digitEight();
  }
  if (varres >=9) {
    digitNine();
  }
  }
