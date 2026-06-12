int analogPin = A0;

void setup() {
  Serial.begin(9600);  //함수 호출로 통신속도 설정.
}

void loop() {
  int analogValue = analogRead(analogPin);  //A0을 읽어서, 아날로그밸류값에 저장?
  Serial.println(analogValue);
  delay(100);
}