int x = 0;
void setup() {
  pinMode(8, OUTPUT);
  digitalWrite(8, LOW);
}

void loop() {
  if(x < 10) {
    x ++;
  digitalWrite(8, HIGH);
  delay(500);
  digitalWrite(8, LOW);
  delay(300);
    }
  else {
    x = 100;
  }
}
