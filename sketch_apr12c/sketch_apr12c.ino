int LEDpin=7;
unsigned long currentTime;
unsigned long prevTime=0;

void setup() {

  //i honestly really love having no clue whats going on
  pinMode(LEDpin, OUTPUT);
  pinMode(5,OUTPUT);

}

void loop() {

  currentTime=millis();

  if (currentTime-prevTime>1000) {
    digitalWrite(LEDpin,LOW);
    digitalWrite(5,HIGH);
  }

  if (currentTime-prevTime>2000) {
    prevTime=currentTime;
    digitalWrite(LEDpin, HIGH);
    digitalWrite(5,LOW);
  }

  
}
