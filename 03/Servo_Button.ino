#include <Servo.h>  //헤더파일 서보.h

int SERVO = 10;
Servo servo;  //제어를 위한 객체 변수 선언?
int buttonPin = 2;

void setup() {
  pinMode(buttonPin, INPUT);  //2번핀으로 입력 받을 거임.
  servo.attach(SERVO);  //서보어태치함수는 10번서보모터~
  servo.write(0);  //서보모터로 입력, 0도.
  delay(1000);
}

void loop() {
  int buttonInput = digitalRead(buttonPin);  //버튼인풋함수는 2번버튼 누른거 읽어와서 쓰기.

  if(buttonInput==1) servo.write(180);  //만약 버튼이 눌렸다면 180도 ㄱㄱ
  else servo.write(18);  //아니면 18도 정도로만?
}