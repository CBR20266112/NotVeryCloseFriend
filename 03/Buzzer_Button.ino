int BUZZER = 10;
int BUTTON = 2;

int note = 1;  //노트의 초기값 저장해두고.
int melody[9] = { -1, 262, 294, 330, 349, 393, 440, 494, 523};  //배열 일단 선언
//-1의 의미는 note0을 사용하지 않고 하나를 날린 다음 1~8을 대응시키려고 그랬대.
void setup() {
  pinMode(BUTTON, INPUT);  //핀모드로 버튼값을 입력하기.
}

void loop() {
  int buttonInput = digitalRead(BUTTON);  //버튼값 읽어서 buttonInput에 저장해두고.
  if(buttonInput == HIGH) {   //만약 버튼이 켜졌다?
      tone(BUZZER, melody[note]);  //버저에 소리 내고 노래 내고 놀아.
      note++;  //음계를 올려, 빨리.
      if(note > 8) {  //만약 8보다 높으면
        note = 1;  //음계는 다시 도.
    }
    delay(444);
  }                                                                 
}