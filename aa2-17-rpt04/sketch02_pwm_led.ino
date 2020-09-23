int pwm = 0;
int led = 3; //D3

void setup() {
  // put your setup code here, to run once:
  //아날로그 출력에서 핀 모드 설정이 필요 없다.

}

void loop() {
  pwm = random(0, 255);
  pwmLed(led, pwm);
  // put your main code here, to run repeatedly:

}

void pwmLed(int led, int pwmValue) {

  analogWrite(led, pwmValue);
  delay(10);
}
