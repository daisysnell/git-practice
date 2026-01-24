// C++ code
//

int redreverseL = 12;
int greenforwardL = 11;
int yellowenableL = 10;

int yellowenableR = 9;
int redreverseR = 8;
int greenforwardR = 7;


void setup()
{
  pinMode(redreverseL, OUTPUT);
  pinMode(greenforwardL, OUTPUT);
  pinMode(yellowenableL, OUTPUT);
  
  pinMode(yellowenableR, OUTPUT);
  pinMode(greenforwardR, OUTPUT);
  pinMode(redreverseR, OUTPUT);
}

void loop()
{
  //(1000) = 1000 millisecond(s) = 1 second
  //(2000) = 2000 millisecond(s) = 2 seconds
  //(5000) = 5000 millisecond(s) = 5 seconds
  //pattern 1 turn it on
  //digitalWrite(yellowenableL, HIGH); // Turn left enable on
  //digitalWrite(yellowenableR, HIGH); // Turn right enable on
  //moved it to put all 6 each time
  
  // pattern 2 make it go forwards
  digitalWrite(yellowenableL, HIGH); // Turn left enable on
  digitalWrite(yellowenableR, HIGH); // Turn right enable on
  digitalWrite(greenforwardL, HIGH);
  digitalWrite(greenforwardR, HIGH);
  digitalWrite(redreverseL, LOW);
  digitalWrite(redreverseR, LOW);
  delay(5000); // Wait for 5 seconds
  
  //pattern 3 stop for 1 second
  digitalWrite(yellowenableL, LOW); // left enable off
  digitalWrite(yellowenableR, LOW); // right enable off
  digitalWrite(greenforwardL, LOW);
  digitalWrite(greenforwardR, LOW);
  digitalWrite(redreverseL, LOW);
  digitalWrite(redreverseR, LOW);
  delay(1000); // for 1 second

  //pattern 4 go backwards for 2 seconds
  digitalWrite(yellowenableL, HIGH); // Turn left enable on
  digitalWrite(yellowenableR, HIGH); // Turn right enable on
  digitalWrite(greenforwardL, LOW);
  digitalWrite(greenforwardR, LOW);
  digitalWrite(redreverseL, HIGH);
  digitalWrite(redreverseR, HIGH);
  delay(2000); // for 2 seconds

  //pattern 5 stopping
  digitalWrite(yellowenableL, LOW); // Turn left enable off
  digitalWrite(yellowenableR, LOW); // Turn right enable off
  digitalWrite(greenforwardL, LOW);
  digitalWrite(greenforwardR, LOW);
  digitalWrite(redreverseL, LOW);
  digitalWrite(redreverseR, LOW);
  
}  
