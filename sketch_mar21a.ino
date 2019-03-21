#include <Bounce2.h>
int ledPin = 13;
int buttonPin = 12;
int trigger = 0;  

void setup() {
  pinMode(ledPin, OUTPUT);
  digitalWrite(buttonPin, HIGH);  
}

void loop() {
  if(digitalRead(buttonPin) == LOW)
  {
    delay(100);
    if(digitalRead(buttonPin) == LOW)    
    trigger=~trigger;
    }
    digitalWrite(ledPin, trigger);
}
