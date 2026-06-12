int BUZZER = 3;  //버저 변수선언, 3번 할당.

void setup() {
  tone(BUZZER, 262);  //tone함수를 이용해 BUZZER핀에 주파수값 도.

  delay(3000);

  noTone(BUZZER);  //꺼라.
}

void loop() {

}