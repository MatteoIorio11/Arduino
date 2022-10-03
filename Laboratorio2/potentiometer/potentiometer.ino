const int ANALOG_INPUT = A0;
const int ANALOG_OUTPUT = 9;
int sensor_value = 0;
int output_value = 0;
void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:
  sensor_value = analogRead(ANALOG_INPUT);

  output_value = map(sensor_value,0, 1023, 0, 255);

  analogWrite(ANALOG_OUTPUT, output_value);
}
