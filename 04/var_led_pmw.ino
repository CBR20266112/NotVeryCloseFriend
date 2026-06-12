int ledPin = 3;  //펄스폭변조 가능한 핀으로 써야 했다고!!!!
int analogPin = A0;

void setup() {

}

void loop() {
  int sensorInput = analogRead(analogPin);  //A0핀 읽어서 센서로 입력.
  analogWrite(ledPin, sensorInput/4);  //센서값 나눠서 2번 led에 쓰기?
  //아날로그라이트는 255까지만 받을 수 있대서 나눠준 거래.
  delay(100);
}