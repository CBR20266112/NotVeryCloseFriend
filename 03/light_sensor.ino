int analogPin = A0;

void setup() {
  Serial.begin(9600);  //씨리얼남바 주파수 맞추기
}

void loop() {
  int analogValue = analogRead(analogPin);  //밸류값은 A0값 읽어서 저장한 거.
  Serial.println(analogValue);  //주파수 맞출테니 A0입력값을 화면에 출력해봐라.
  delay(100);
}