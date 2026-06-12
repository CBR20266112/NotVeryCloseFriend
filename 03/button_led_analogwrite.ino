int ledPin = 13;
int buttonPin = 2;  //버튼이랑 led 변수 할당부터.

void setup() {  //일단 setup함수로 시작.
  pinMode(buttonPin, INPUT);  //  2번핀으로 입력 받기. 라고 함수를 짜놨다~
}

void loop() {
  int buttonInput = digitalRead(buttonPin);  //2번핀의 버튼값을 함수로 읽어와서 버튼인풋 입력값에 저장하기?
  if(buttonInput == HIGH) {  //버튼입력값 저장된 게 켜져있다면
    for(int t_high = 0; t_high < 256; t_high++) {  //t_high가 뭐더라.. 타임 하이라고 하네요~
    analogWrite(ledPin, t_high);  //13번 핀에 불값 넣어라?
    delay(11);
    }
  }
  else {  //그럼 이건 버튼입력값이 꺼져 있을 경우?
    analogWrite(ledPin, 0);  //이것도 무슨 뜻인지는 정확히 모르겠지만 아무튼 13번핀 불 끄란 거지?
  }
}