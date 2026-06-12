int LED[14] = { 0,1,2,3,4,5,6,7,8,9,10,11,12,13 };    //led 선언

void setup() {    //프로그램 실행할 때 딱 한 번 실행
  // LED 초기화
  pinMode(LED[0], OUTPUT);
  pinMode(LED[1], OUTPUT);
  pinMode(LED[2], OUTPUT);
  pinMode(LED[3], OUTPUT);
  pinMode(LED[4], OUTPUT);
  pinMode(LED[5], OUTPUT);
  pinMode(LED[6], OUTPUT);
  pinMode(LED[7], OUTPUT);
  pinMode(LED[8], OUTPUT);
  pinMode(LED[9], OUTPUT);
  pinMode(LED[10], OUTPUT);
  pinMode(LED[11], OUTPUT);
  pinMode(LED[12], OUTPUT);
  pinMode(LED[13], OUTPUT); 
  // LED 켜기
  digitalWrite(LED[0], HIGH);
  digitalWrite(LED[1], HIGH);
  digitalWrite(LED[2], HIGH);
  digitalWrite(LED[3], HIGH);
  digitalWrite(LED[4], HIGH);
  digitalWrite(LED[5], HIGH);
  digitalWrite(LED[6], HIGH);
  digitalWrite(LED[7], HIGH);
  digitalWrite(LED[8], HIGH);
  digitalWrite(LED[9], HIGH);
  digitalWrite(LED[10], HIGH);
  digitalWrite(LED[11], HIGH);
  digitalWrite(LED[12], HIGH);
  digitalWrite(LED[13], HIGH);
}
void loop() {  //반복 실행, 꺼지지 말란 소리.

}