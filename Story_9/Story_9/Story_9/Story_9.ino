// C++ code
// Story_9

// ---------------------------------------------------------------------------
// Example NewPing library sketch that does a ping about 20 times per second.
// ---------------------------------------------------------------------------

#include <NewPing.h> //import the NewPing sonar library

int redreverseL = 12;
int greenforwardL = 11;
int yellowenableL = 10;

int yellowenableR = 9;
int redreverseR = 8;
int greenforwardR = 7;

const int RIGHT_FEEDBACK = 2; // Pin numbers on Rover for RIGHT motor sensor
const int LEFT_FEEDBACK = 3; // Pin numbers on Rover for LEFT motor sensor

#define TRIGGER_PIN  4  // Arduino pin tied to trigger pin on the ultrasonic sensor.
#define ECHO_PIN     5  // Arduino pin tied to echo pin on the ultrasonic sensor.
#define TRIGGER_DOWN 13  // Arduino pin tied to trigger pin on the ultrasonic sensor.
#define ECHO_DOWN    17  // Arduino pin tied to echo pin on the ultrasonic sensor.


#define MAX_DISTANCE 200 // Maximum distance we want to

NewPing downSonar(TRIGGER_DOWN, ECHO_DOWN, MAX_DISTANCE);

volatile int leftcounter = 0; // initiate L counter to zero for start
volatile int rightcounter = 0; //initiate R counter to zero for start


// make a function to add 1 rotation to the left motor counter
void LeftMotorISR(){
  // adds one to the left motor counter on each motor revolution
  leftcounter++;
}

// make a function to add 1 rotation to the right motor counter
void RightMotorISR(){
  // adds one to the right motor counter on each motor revolution   
  rightcounter++;
}

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
  
  pinMode(LEFT_FEEDBACK, INPUT);
  pinMode(RIGHT_FEEDBACK, INPUT);
  
  Serial.begin(115200);
  downSonar.ping_cm();
  
}

void loop()
{
  goForwards();  // Call the function to start forwards motion
  delay(50);     
  
  int distance = downSonar.ping_cm();

  // Wait 50ms between pings (about 20 pings/sec). 29ms should be the shortest delay between pings.
  Serial.print("Down Ping: ");
  Serial.print(distance); //  distance in cm and print result
  Serial.println("cm");
  
if (distance == 0 || distance > 12)
  {
  stopMoving(); // stop moving
  delay(200);

  goBack(); // back up  
  delay(500);

  stopMoving(); // stop moving
  exit(0); // stop forever
  }
    
}