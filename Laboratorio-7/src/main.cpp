#include <Arduino.h>

int val = 0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  val = analogRead(A0);
  float voltage = val * (5.0 / 1024.0);
  float temperatureC = (voltage - 0.5) * 100;
  Serial.println(temperatureC);
}





