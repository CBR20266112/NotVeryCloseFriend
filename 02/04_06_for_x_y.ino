int led[6] = { 3, 5, 6, 9, 10, 11 };    //led 선언

void setup() {    //프로그램 실행할 때 딱 한 번 실행
 for(int i = 0; i < 6; i++) {    //i 0~5까지 반복, led 6개 전부 돌기
    pinMode(led[i], OUTPUT);    //setup 중괄호 안에 -> for문 안에 들어가야 한다고
    }
  } 
void loop() {    //이 안의 코드는 계속 반복
  for(int x = 5; x >= 0; x--) {    //for문 x를 사용해 범위를 정하고
    for(int y = x; y >= 0; y--) {   //y는 하나씩 끄는 과정을 담당.
      for(int i = 0; i < 6; i++) {    //for문 i를 사용해 x범위 내에서 제어
        if(i <= y) {    //y는 지금 어디까지 켜져 있어야 하는지. (x의 범위 내에서)
        analogWrite(led[i], 255);    //최대로 밝기
        } else {
        analogWrite(led[i], 0);    //최대로 어둡기
        }
      }    
      delay(300);    //중간과정인 y 반복문이 끝날 때마다 딜레이가 있어야 확인이 수월하지.
    }  
  }
}

