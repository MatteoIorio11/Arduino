#include <Arduino.h>
#include<EnableInterrupt.h>

#define BUTTON_PIN 13

volatile int count = 0;
int prev = 0; 

void inc_count(){
    count++;
}

void setup() {
  // put your setup code here, to run once:
    Serial.begin(9600);
    //attachInterrupt(digitalPinToInterrupt(BUTTON_PIN), inc_count, RISING);
    enableInterrupt(BUTTON_PIN, inc_count, RISING);
}


void loop() {
  noInterrupts();
  int current = count;  
  interrupts();
  if(current != prev){
    Serial.println(current);
    prev = current;
  }
}

