int i;

void setup(){
  for (i=2; i<=5; i++){
    pinMode(i, OUTPUT);
    digitalWrite(i, LOW);
  }
}

void loop(){
  for(i=2; i<=5; i++){
    digitalWrite(i, HIGH);
    delay(500);
    digitalWrite(i, LOW);
  }
  
  for(i=5; i>=2; i--){
    digitalWrite(i, HIGH);
    delay(500);
    digitalWrite(i, LOW);
  }
}
