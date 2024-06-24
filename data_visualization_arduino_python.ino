void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  float time = micros() / 1e6;
  int sensorValue1 = analogRead(A0);
  int sensorValue2 = analogRead(A1);
  delay(100);
  //Serial.print("time = ");
  Serial.print(time);
  Serial.print(", ");
  Serial.print(sensorValue1);
  Serial.print(", ");
  Serial.println(sensorValue2);
}
