#include <Arduino.h>
#include "Servo.h"
Servo s;
void setup() {
  s.attach(9);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  long readValue = analogRead(A0);
  Serial.println(readValue);
  int value = map(readValue, 0, 1023, 0, 180);
  s.write(value);
}
