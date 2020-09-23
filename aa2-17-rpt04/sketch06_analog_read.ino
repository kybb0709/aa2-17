/*
  Blink by AA00
  Turns an LED on for one second, then off for one second, repeatedly.
*/
void setup() {
  Serial.begin(9600);
}

void loop() {
  int sensorValue = analogRead(A0);
  Serial.print("AA17, AA18, Present V (0 ~ 5.0) : ");
  float voltage = sensorValue * (5.0 / 1023.0);
  Serial.println(voltage);
  delay(500);
}
