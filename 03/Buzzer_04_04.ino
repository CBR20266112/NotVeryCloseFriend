int BUZZER = 3;  //버저 변수선언, 3번 할당.

void setup() {
  for(int cnt = 0; cnt < 3; cnt++) {
    tone(BUZZER, 262);  //tone함수를 이용해 BUZZER핀에 주파수값 도.
    delay(1000);  //그냥 딜레이타임이 아니라 1초간 소리 내게 하는 거라고.
    tone(BUZZER, 294);  //레.
    delay(1000);  //딜레이가 버저에선 제일 중요하네?
  }

  noTone(BUZZER);  //꺼라.
}

void loop() {
}