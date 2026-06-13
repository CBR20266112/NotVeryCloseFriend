int BUZZER = 10;
int BUTTON = 2;

char note[] = "ggaaggeggeed ggaaggegedec";  //음계
char beat[] = "1111112111122111112111122";  //지속시간(박자)
int note_length = sizeof(note)/sizeof(note[0])-1;  //음계의 길이는 sizeof?? 0으로 시작하기 때문에 고치려고 이런 걸 하는 건가?

int tempo = 300;  //템포 = 빠르기??
int freq(char note) {  //freq 함수로 음계 세팅?
  char note_name[] = { 'c', 'd', 'e', 'f', 'g', 'a', 'b', 'c'};  //음계 배열에 이름 붙이기?
  int note_freq[] = {262, 294, 330, 349, 393, 440, 494, 523};  //이게 바로 음계 배열일 것이고.

  for(int i = 0; i < sizeof(note_name)/sizeof(note_name[0]);i++) {  //연주되는 곡의 길이? 에 맞춰 반복하라고?
    if(note_name[i] == note) {  //음계의 이름과 그 음계가 같다면?
      return note_freq[i];  //연주로 돌아와라.
    }
  }
}
int duration(char beat) {  //지속되는 비트???
  return beat - '0';  //0으로 돌아오고 끝내라는 거?
}
void setup() {  
  for(int i = 0; i < note_length; i++) {  //노트의 길이보다 i가 커질 때까지 반복해??
    if(note[i] != ' ') {  //만약 음계i가 아니라면? 이게 뭔 명제였더라, not인가?
      tone(BUZZER, freq(note[i]));  //버저 울려라, freqnote 함수로?
    }
    delay(tempo*duration(beat[i]));  //템포, 그러니까 빠르기만큼 뭐 하라는 거야?
    noTone(BUZZER);  //그만 울어.
    delay(100);
  }
}
void loop() {
}
