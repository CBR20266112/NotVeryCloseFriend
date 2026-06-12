int digitalPin = 2;  //변수를 선언하고 2번 핀으로 초기화? 저장.

void setup() {  //일단 setup함수로 실행
  Serial.begin(9600);  //9600으로 통신 시작
//2번 핀으로 설정, 통신 시작 후
  pinMode(digitalPin, INPUT);  //pinMode함수로 digitalPin 입력설정, digitalRead 함수로 값 읽을 때 시용.
}
//2번 읽고, PC에 출력 후 0.1초 대기.
void loop() {  //반복하란 소리
  int digitalValue = digitalRead(digitalPin);  //digitalRead 함수 이용헤 Pin값 읽고 Value에 저장??
  Serial.println(digitalValue);  //변수 값을 시리얼 모니터로 출력.
  delay(100);
}