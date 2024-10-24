


void setup() {
  // put your setup code here, to run once:
pinMode(7, INPUT); 
}

void loop() {
  // put your main code here, to run repeatedly:
if (digitalRead(7)== HIGH) { 
  tone(8, 2000); 
}else{
  noTone(8);
}
}
