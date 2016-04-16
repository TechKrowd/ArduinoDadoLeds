int LEDS[]={2,3,4,5,6,7};
int PULSADOR = 8;
int i;
int n=0;
void setup(){
  for(i=0; i<6; i++){
    pinMode(LEDS[i], OUTPUT);
    digitalWrite(LEDS[i], LOW);
  }
  
  pinMode(PULSADOR, INPUT);
  
  randomSeed(analogRead(0));
  
}

void loop(){
  while(digitalRead(PULSADOR)==0);
  n = random(1,7);
  
  for(i=0;i<n; i++){
    digitalWrite(LEDS[i], HIGH);
  }
  
  delay(3000);
  
  for(i=0; i<n; i++){
    digitalWrite(LEDS[i], LOW);
  }
}

