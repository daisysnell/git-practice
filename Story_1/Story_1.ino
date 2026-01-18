// C++ code
//

int redLED = 13;
int greenLED = 12;
int blueLED = 11;


void setup()
{
  pinMode(redLED, OUTPUT);
  pinMode(greenLED, OUTPUT);
  pinMode(blueLED, OUTPUT);
}

void loop()
{
  digitalWrite(redLED, HIGH);
  delay(100); // Wait for 100 millisecond(s)
  digitalWrite(greenLED, HIGH);
  delay(200); // Wait for 100 millisecond(s)
  digitalWrite(blueLED, HIGH);
  delay(300); // Wait for 100 millisecond(s)
  
  digitalWrite(redLED, LOW);
  delay(100); // Wait for 100 millisecond(s)
  digitalWrite(greenLED, LOW);
  delay(200); // Wait for 100 millisecond(s)
  digitalWrite(blueLED, LOW);
  delay(300); // Wait for 100 millisecond(s)
}  
