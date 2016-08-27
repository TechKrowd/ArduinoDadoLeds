
int PULSADOR = 2;
int LED=3;
int estado=LOW;

void setup(){
  pinMode(PULSADOR, INPUT);
  pinMode(LED, OUTPUT);
  digitalWrite(LED, LOW);
}

void loop(){
  while(digitalRead(PULSADOR)==LOW);
  estado = digitalRead(LED);
  digitalWrite(LED, !estado);
  while(digitalRead(PULSADOR)==HIGH);
}
