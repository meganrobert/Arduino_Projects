void setup() {
 pinMode(7,OUTPUT); 
 pinMode(8, OUTPUT);
 pinMode(9, OUTPUT);


}

void loop() {
  digitalWrite(7, HIGH); 
  digitalWrite(8, LOW); 
  digitalWrite(9, LOW); 
  delay(2000); 
  digitalWrite(7, LOW); 
  digitalWrite(8, HIGH); 
  digitalWrite(9, LOW); 
  delay(2000); 
  digitalWrite(7, LOW); 
  digitalWrite(8, LOW); 
  digitalWrite(9, HIGH); 
  delay(2000); 
  
}
