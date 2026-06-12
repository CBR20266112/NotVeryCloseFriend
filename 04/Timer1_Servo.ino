#include <TimerOne.h>  //타이머 라이브러리 재소환
int SERVO = 10;

int SERVO_PERIOD = 20000;  //마이크로초래. 그러면,, 20000us = 20ms = 0.02s?
//그래서 위 구문은 20ms마다 반복한다는 간격을 선언해둔 거지.
int SERVO_MINDUTY = (1024/20)*0.7;  //듀티사이클 라이브러리를 위 20ms로 나눈 거지?
int SERVO_MAXDUTY = (1024/20)*2.3;  //그리고 0.7은 최소각도, 2.3은 최대각도라는 거야.
//그러니까 20ms 중에 몇 도 만큼 동작할래?
void setup() {
  Timer1.initialize();  //초기화하고 시작하자.
  Timer1.pwm(SERVO, 0);  //펄스위드모듈어쩌구 함수, 일단 0도.

  Timer1.setPeriod(SERVO_PERIOD);  //저 맨위에 간격으로 세팅.
  Timer1.setPwmDuty(SERVO, SERVO_MINDUTY);  //펄스위드듀티는 간격이랑 뭐가 다르지? 간격에 이 펄스위드듀티 한번인 거야?
  delay(1000);

  for(int i = 0; i < 3; i++) {
    Timer1.setPwmDuty(SERVO, SERVO_MINDUTY);  //펄스위드듀티, 최소간격으로.
    delay(1000);  //몇초후?
    Timer1.setPwmDuty(SERVO, SERVO_MAXDUTY);  //펄스위드듀티, 최대간격으로.
    delay(1000);
  }
  Timer1.disablePwm(SERVO);  //비활성화?
}
void loop() {
}