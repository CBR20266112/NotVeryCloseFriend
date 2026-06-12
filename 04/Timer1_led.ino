#include <TimerOne.h>  //Timer 함수를 사용하기 위해 헤더파일 하나 끌어온 거라고?
//라이브러리를 불러온 거라고 하네.
int LED = 10;

void setup() {  
  Timer1. initialize();  //타이머초기화 함수 호출?? 난 그런 거 선언 안 해놨는데
  Timer1.pwm(LED, 0);  //펄스위드....? 아무튼 LED를 0으로 시작한다는 거지.
//아날로그라이트는 뭐 pwm을 건드릴 수 없대. 그래서 주기 설정을 마이크로초로 하라는 거라네.
  Timer1.setPeriod(444444);  //타이머 간격설정함수로 0.44초??
  Timer1.setPwmDuty(LED, 512);  //그리고 저 위에서 펄스위드듀티..뭐요?
}  //1024의 반 가량이라 반 듀티사이클씩 반복하는 거야?

void loop() {

}