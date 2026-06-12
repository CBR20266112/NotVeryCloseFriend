int digitalPin = 2;  //변수 선언 후 2번 핀으로 초기화?

void setup() {
  Serial.begin(9600);

  pinMode(digitalPin, INPUT);  //이게 함수를 사용해 입력설정?
}

void loop() {
  int digitalValue = digitalRead(digitalPin);  //함수 선언한걸로 값을 읽어와서 밸류값에 넣기.
  Serial.println(digitalValue);  //이게 출력이겠지.
  delay(100);
}