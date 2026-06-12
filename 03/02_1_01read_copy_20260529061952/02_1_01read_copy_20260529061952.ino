void setup() {
  pinMode(13, OUTPUT);   // 13번 핀을 출력으로 설정
}

void loop() {
  digitalWrite(13, HIGH);  // LED 켜기
  delay(1000);             // 1초 대기

  digitalWrite(13, LOW);   // LED 끄기
  delay(1000);             // 1초 대기
}