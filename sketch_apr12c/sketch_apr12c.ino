int LEDpin=7;
unsigned long currentTime;
unsigned long prevTime=0;

void setup() {

  //i honestly really love having no clue whats going on
  pinMode(LEDpin, OUTPUT);

}

void loop() {

  currentTime=millis();

  if (currentTime-prevTime>1000) {
    digitalWrite(LEDpin,LOW);
  }

  if (currentTime-prevTime>2000) {
    prevTime=currentTime;
    digitalWrite(LEDpin, HIGH);
  }

  
}
