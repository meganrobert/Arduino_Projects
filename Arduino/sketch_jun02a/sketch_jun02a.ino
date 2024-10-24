
#define LEDpin 9
#define Potpin A0

void setup() {
  // put your setup code here, to run once:
  pinMode(LEDpin, OUTPUT); 
}

void loop() {
  // put your main code here, to run repeatedly:
  int reading = map(analogRead(Potpin),0,1023,0,255); 
  analogWrite (LEDpin, reading); 
  delay(10);
}
