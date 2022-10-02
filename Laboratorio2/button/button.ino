#define LED 13
#define PIN 12
int state = 0;
void setup() {
  // put your setup code here, to run once:
  pinMode(PIN, INPUT);
  pinMode(LED, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(PIN) == HIGH){
    digitalWrite(LED, HIGH);
    delay(100);
    state = 1;
  }else if(state == 1){
    state = 0;
    digitalWrite(LED, LOW);
    delay(100);
  }
}
