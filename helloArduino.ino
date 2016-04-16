int LED=2;

void setup(){
  pinMode(LED, OUTPUT);
  digitalWrite(LED, LOW);
}

void loop(){
  digitalWrite(LED, HIGH);
  delay(500);
  digitalWrite(LED, LOW);
  delay(500);
}
