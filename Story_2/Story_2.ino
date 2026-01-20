// C++ code
//

int greenLED = 12;
int yellowLED = 11;


void setup()
{
  pinMode(greenLED, OUTPUT);
  pinMode(yellowLED, OUTPUT);
}

void loop()
{
  digitalWrite(greenLED, HIGH); // Turn green light on
  digitalWrite(yellowLED, LOW); // turn the yellow light off
  delay(1000); // Wait for 1000 millisecond(s)
  
  digitalWrite(greenLED, LOW); //turn the green off
  digitalWrite(yellowLED, HIGH); //turn the yellow on
  delay(1000); // Wait for 1000 millisecond(s)
  
}  
