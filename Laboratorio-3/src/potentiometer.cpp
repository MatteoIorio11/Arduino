/*
#include <Arduino.h>

#define PIN A0;
int current = 0;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int newValue = analogRead(A0);
  if(newValue !=  current){
    current = newValue;
    Serial.println(current);
  }
}
*/