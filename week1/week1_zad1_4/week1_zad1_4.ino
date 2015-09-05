void setup() {
  pinMode(8, OUTPUT);
}

void morse_letter(int time1, int time2, int port, int amount){
  for(int i=0; i<amount; i++){
  digitalWrite(port, HIGH);
  delay(time1);
  digitalWrite(port, LOW);
  delay(time2);
  }
}

void loop() {
  morse_letter(100, 500, 8, 3);
  morse_letter(500, 500, 8, 3);
  morse_letter(100, 500, 8, 3);

  delay(2000);
}
