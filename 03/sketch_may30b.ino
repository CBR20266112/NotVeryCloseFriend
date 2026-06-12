//명령을 보내고, 받아서 읽고, 그러면 LED를 켰다가 꺼. 그리고 확인하는 거야.
int LED[14] = { 0,1,2,3,4,5,6,7,8,9,10,11,12,13 };  //led 선언
void setup() {  //일단 setup함수로 실행, 프로그램 실행할 때 딱 한 번.
  Serial.begin(9600);  //9600으로 통신 시작
}  
//LED[]는 대상, V[]는 읽은 결과값
void loop() {    //반복시키고
  int V[14];
  for(int i = 0; i < 14; i++) {
    V[i] = digitalRead(LED[i]);  //digitalread 함수 사용해 값을 읽고 밸류에 저장??
  }
  for(int j = 0; j < 14; j++) {
    Serial.println(LED[j]);  //몇 번 LED?
    Serial.println(V[j]);  //변수 값을 모니터로 출력.
  }
  delay(4000);  //4초.
}  //5V에 연결하면 1, 0V에 연결하면 0이 출력되는 거지.