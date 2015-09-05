int x = 0;
void setup() {
  pinMode(8, OUTPUT);
  digitalWrite(8, LOW);
}

void loop() {
  while(true) {
    if(x < 10) {
      x = x + 1;
      digitalWrite(8, HIGH);
      delay(500);
      digitalWrite(8, LOW);
      delay(300);
    } else {
      delay(3000);
      x = 0;
    }
  }
}
