int BUZZER = 10;
int BUTTON = 2;

char note[] = "ggaaggeggeed ggaaggegedec";  //음계
char beat[] = "1111112111122111112111122";  //지속시간(박자)
int note_length = sizeof(note)/sizeof(note[0])-1;  //음계의 길이는 문자 개수, -1은 \0을 제외하려고.

int tempo = 444;  //템포 = 빠르기??
int freq(char note) {  //음계 문자를 받는 함수.
  char note_name[] = { 'c', 'd', 'e', 'f', 'g', 'a', 'b', 'c' };  //음계 배열에 이름 붙이기?
  int note_freq[] = {262, 294, 330, 349, 393, 440, 494, 523};  //이게 바로 음계 배열일 것이고.

  for(int i = 0; i < sizeof(note_name)/sizeof(note_name[0]);i++) {  //음계표를 뒤져서 찾아오기, 반복 똥개훈련.
    if(note_name[i] == note) {  //음계의 이름과 그 음계가 같다면?
      return note_freq[i];  //찾아온 소리 뱉어라.
    }
  }
}

int duration(char beat) {  //아, 이건 박자 지속시간 함수.
  return beat - '0';  //아스키 코드로 숫자 변환해서 뱉기.
}
//이렇게 박자 함수랑 음계 함수 해놨고.
void setup() {  //이제 버튼 재생하는 걸로.
  pinMode(BUTTON, INPUT); 
}
void loop() {
  int buttonInput = digitalRead(BUTTON);
  if(buttonInput == HIGH) {
    for(int i = 0; i < note_length; i++) {  //노트 길이 끝까지 반복, 연주 끝까지 하란 얘기.
      if(note[i] != ' ') {  //만약 음계i가 공백이 아니라면?
        tone(BUZZER, freq(note[i]));  //버저 울려라, freqnote 함수로?
      }
      delay(tempo*duration(beat[i]));  //딜레이 시간에도 빠르기*박자 해주란 거지.
      noTone(BUZZER);  //그만 울어.
      delay(100);
    }
  }
}
