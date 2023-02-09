/*
 * This code will run the numbers 0 to 9 on the 7 Segment display
 * and you are able to scroll through the numbers with a press of a button
 */


int a = 2; //initiaize the specified variable to the defined interger
int b = 3;
int c = 4;
int d = 5;
int e = 6;
int f = 7;
int g = 8;
int btn = 9;
int btnPushCounter = 0;
int btnState = 0;
int prvbtnState = 0;

void setup() {
  pinMode (a, OUTPUT); //assignes the given pin number to output
  pinMode (b, OUTPUT);
  pinMode (c, OUTPUT);
  pinMode (d, OUTPUT);
  pinMode (e, OUTPUT);
  pinMode (f, OUTPUT);
  pinMode (g, OUTPUT);
  pinMode (btn, INPUT);
  Serial.begin(9600);//sets up serial monitor
}
void clearAll() //sets up function clearAll
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
  clearAll(); //calls the clearAll function
  digitalWrite(a, LOW);
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
  digitalWrite(d, LOW);
  digitalWrite(e, LOW);
  digitalWrite(f, LOW);
    }

void digitOne() //sets up the function with a name assigned to it
    {
  clearAll(); //calls the clearAll function
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
    }

void digitTwo() //sets up the function with a name assigned to it
    {
  clearAll(); //calls the clearAll function
  digitalWrite(a, LOW);
  digitalWrite(b, LOW);
  digitalWrite(d, LOW);
  digitalWrite(e, LOW);
  digitalWrite(g, LOW);
    }
 
void digitThree() //sets up the function with a name assigned to it
    {
  clearAll(); //calls the clearAll function
  digitalWrite(a, LOW);
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
  digitalWrite(d, LOW);
  digitalWrite(g, LOW);
    }

void digitFour() //sets up the function with a name assigned to it
    {
  clearAll(); //calls the clearAll function
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
  digitalWrite(f, LOW);
  digitalWrite(g, LOW);
    }

void digitFive() //sets up the function with a name assigned to it
    {
  clearAll(); //calls the clearAll function
  digitalWrite(a, LOW);
  digitalWrite(c, LOW);
  digitalWrite(d, LOW);
  digitalWrite(f, LOW);
  digitalWrite(g, LOW);
    }

void digitSix() //sets up the function with a name assigned to it
    {
  clearAll(); //calls the clearAll function
  digitalWrite(c, LOW);
  digitalWrite(d, LOW);
  digitalWrite(e, LOW);
  digitalWrite(f, LOW);
  digitalWrite(g, LOW);
    }

void digitSeven() //sets up the function with a name assigned to it
    {
  clearAll(); //calls the clearAll function
  digitalWrite(a, LOW);
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
    }

void digitEight() //sets up the function with a name assigned to it
    { 
  clearAll(); //calls the clearAll function
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
  clearAll(); //calls the clearAll function
  digitalWrite(a, LOW);
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
  digitalWrite(d, LOW);
  digitalWrite(f, LOW);
  digitalWrite(g, LOW);
    }
    
void loop() {
  btnState = digitalRead (btn); //btnState will  read the values from pin 2
    if (btnState != prvbtnState){ //checks if btnState is equal to prvbtnState
      if (btnState == HIGH){ //if the btnState is reading HIGH, then run the code that follows
       btnPushCounter++; //adds one to the btnPushCounter
       Serial.println ("on"); //prints the following text to the serial montior
       Serial.print ("number of Pushes");
       Serial.println(btnPushCounter);
      } 
    }else { //if the value is anything other than the values stated in the if statement
        Serial.println ("off"); //prints "off" to the serial monitor
      }

  delay (50); //delay to reduce bouncing

    
  prvbtnState = btnState; //sets the prvbtnState value to btnState value

  
  if (btnPushCounter == 0) { //if the counter is equal to designated number
    digitZero(); //calls the specified function
  }
  if (btnPushCounter == 1) {
    digitOne();
  }
  if (btnPushCounter == 2) {
    digitTwo();
  }
  if (btnPushCounter == 3) {
    digitThree();
  }
  if (btnPushCounter == 4) {
    digitFour();
  }
  if (btnPushCounter == 5) {
    digitFive();
  }
  if (btnPushCounter == 6) {
    digitSix();
  }
  if (btnPushCounter == 7) {
    digitSeven();
  }
  if (btnPushCounter == 8) {
    digitEight();
  }
  if (btnPushCounter == 9) {
    digitNine();
  }
  if (btnPushCounter == 10) {
    btnPushCounter = 0;
  }
}
