int BUZZER = 10;

int note[9] = { -1, 262, 294, 330, 349, 393, 440, 494, 523};  //배열 일단 선언
//-1의 의미는 note0을 사용하지 않고 하나를 날린 다음 1~8을 대응시키려고 그랬대.
void setup() {
  Serial.begin(9600);
}

void loop() {
  if(Serial.available()) {  //씨리얼 함수가 이용가능하면??
    char userInput = Serial.read();  //유저인풋은 읽어온 씨리알값.
    if('1' <= userInput && userInput <= '8') {  //1이상8이하면
      int num = userInput - '0';  //남바는 유저인풋 빼기 0이야.....??
//아, 내 입력값이 ASKII코드에서 '0'을 빼서 숫자로 변환하는 식인가.
      tone(BUZZER, note[num]);  //버저에 유저입력남바에 대응되는 음계 출력
      delay(444);
    }
  } 
  noTone(BUZZER);  //꺼라.
}