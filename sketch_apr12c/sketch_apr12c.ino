int LEDpin=7;
unsigned long currentTime;
unsigned long prevTime=0;

void setup() {

  pinMode(LEDpin, OUTPUT);

}

void loop() {

  currentTime=millis();

  if (currentTime-prevTime>2000) {
    prevTime=currentTime;
    digitalWrite(LEDpin, HIGH);
  }

}
