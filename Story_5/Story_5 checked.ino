// C++ code
// Story_5

int redreverseL = 12;
int greenforwardL = 11;
int yellowenableL = 10;

int yellowenableR = 9;
int redreverseR = 8;
int greenforwardR = 7;

// make a function to make it go forwards
void goForwards()
{
  analogWrite(yellowenableL, 200); // Turn left enable on
  analogWrite(yellowenableR, 200); // Turn right enable on
  digitalWrite(greenforwardL, HIGH);
  digitalWrite(greenforwardR, HIGH);
  digitalWrite(redreverseL, LOW);
  digitalWrite(redreverseR, LOW);
}

// make a function to make it go left
void goLeft()
{
  analogWrite(yellowenableL, 200); // Turn left enable on faster
  analogWrite(yellowenableR, 100); // Turn right enable on slower
  digitalWrite(greenforwardL, HIGH);
  digitalWrite(greenforwardR, LOW);
  digitalWrite(redreverseL, LOW);
  digitalWrite(redreverseR, LOW);
}

// make a function to make it go right
void goRight()
{
  analogWrite(yellowenableL, 100); // Turn left enable on slower
  analogWrite(yellowenableR, 200); // Turn right enable on faster
  digitalWrite(greenforwardL, LOW);
  digitalWrite(greenforwardR, HIGH);
  digitalWrite(redreverseL, LOW);
  digitalWrite(redreverseR, LOW);
}

// make a function to make it stop
void stopMoving()
{
  analogWrite(yellowenableL, 0); // left enable off
  analogWrite(yellowenableR, 0); // right enable off
  digitalWrite(greenforwardL, LOW);
  digitalWrite(greenforwardR, LOW);
  digitalWrite(redreverseL, LOW);
  digitalWrite(redreverseR, LOW);
}

// make a function to make it reverse
void goBack()
{
  analogWrite(yellowenableL, 200); // Turn left enable on
  analogWrite(yellowenableR, 200); // Turn right enable on
  digitalWrite(greenforwardL, LOW);
  digitalWrite(greenforwardR, LOW);
  digitalWrite(redreverseL, HIGH);
  digitalWrite(redreverseR, HIGH);
}

// make a function to stop and turn off
void stopandturnoff()
{
  analogWrite(yellowenableL, 0); // Turn left enable off
  analogWrite(yellowenableR, 0); // Turn right enable off
  digitalWrite(greenforwardL, LOW);
  digitalWrite(greenforwardR, LOW);
  digitalWrite(redreverseL, LOW);
  digitalWrite(redreverseR, LOW);
}


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

  // go forwards for 2 seconds
  goForwards();  // Call the function to start forwards motion
  delay(2000); // for 2 seconds
  
  // go left for 2 seconds
  goLeft();  // Call the function to go left
  delay(2000); // for 2 seconds
  
  // go right for 2 seconds
  goRight();  // Call the function to go right
  delay(2000); // for 2 seconds
  
  // go left for 2 seconds
  goLeft();  // Call the function to go left
  delay(2000); // for 2 seconds
  
  // go right for 2 seconds
  goRight();  // Call the function to go right
  delay(2000); // for 2 seconds
  
}  