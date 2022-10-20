#include <Arduino.h>


void setup(){
    Serial.begin(9600);
}

void loop(){
    int read = analogRead(A0);
    double volt =((double) read)*5/1024;
    Serial.println(volt);
    delay(1000);
}