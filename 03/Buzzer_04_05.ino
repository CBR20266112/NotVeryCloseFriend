int BUZZER = 3;  //버저 변수선언, 3번 할당.

int melody[8] = { 262, 294, 330, 349, 393, 440, 494, 523 };  //도레미파솔라시도 배열변수 선언

void setup() {
  for(int note = 0; note < 8; note++) {  //노트값 증가??
    tone(BUZZER, melody[note]);  //톤은 3번 활성화, 멜로디는 노트값으로 설정.
    delay(500);  //0.5초 대기해.
  }
  noTone(BUZZER);  //꺼라.
}
void loop() {

}