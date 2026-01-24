// C++ code
//

int redreverseL = 12;
int greenforwardL = 11;
int yellowenableL = 10;

int yellowenableR = 9;
int redreverseR = 8;
int greenforwardR = 7;

// make a function to make it go forwards
void goForwards()
{
  digitalWrite(yellowenableL, HIGH); // Turn left enable on
  digitalWrite(yellowenableR, HIGH); // Turn right enable on
  digitalWrite(greenforwardL, HIGH);
  digitalWrite(greenforwardR, HIGH);
  digitalWrite(redreverseL, LOW);
  digitalWrite(redreverseR, LOW);
}

// make a function to make it stop
void stopMoving()
{
  digitalWrite(yellowenableL, LOW); // left enable off
  digitalWrite(yellowenableR, LOW); // right enable off
  digitalWrite(greenforwardL, LOW);
  digitalWrite(greenforwardR, LOW);
  digitalWrite(redreverseL, LOW);
  digitalWrite(redreverseR, LOW);
}

// make a function to make it reverse
void goBack()
{
  digitalWrite(yellowenableL, HIGH); // Turn left enable on
  digitalWrite(yellowenableR, HIGH); // Turn right enable on
  digitalWrite(greenforwardL, LOW);
  digitalWrite(greenforwardR, LOW);
  digitalWrite(redreverseL, HIGH);
  digitalWrite(redreverseR, HIGH);
}

// make a function to stop and turn off
void stopandturnoff()
{
  digitalWrite(yellowenableL, LOW); // Turn left enable off
  digitalWrite(yellowenableR, LOW); // Turn right enable off
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

  // go forwards for 5 seconds
  goForwards();  // Call the function to start forwards motion
  delay(5000); // Wait for 5 seconds
  
  //stop for 1 second
  stopMoving();
  delay(1000); // for 1 second

  //go backwards for 2 seconds
  goBack();
  delay(2000); // for 2 seconds
  //stop and turn off
  stopandturnoff();
  
}  