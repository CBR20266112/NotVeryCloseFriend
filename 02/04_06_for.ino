int led[6] = { 3, 5, 6, 9, 10, 11 };

void setup() {
  for(int i = 0; i <=5; i++) {
    pinMode(led[i], OUTPUT);    //setup 중괄호 안에 -> for문 안에 들어가야 한다고
    }
  }
void loop() {
  for(int i = 0; i <=5; i++) {
    for(int t_high=0;t_high<=255;t_high++) {
      analogWrite(led[i], t_high);
      delay(2);
    }
    analogWrite(led[i], 255);
  }
  for(int i = 5; i >=0; i--) {
    for(int t_high=255;t_high>=0;t_high--) {
      analogWrite(led[i], t_high);
      delay(2);
    }
    analogWrite(led[i], 0);
  }
}