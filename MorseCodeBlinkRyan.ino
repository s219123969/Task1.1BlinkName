
// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  // R
  digitalWrite(LED_BUILTIN, HIGH);  
  delay(500);                      
  digitalWrite(LED_BUILTIN, LOW);   
  delay(500);
  digitalWrite(LED_BUILTIN, HIGH);  
  delay(1500);                      
  digitalWrite(LED_BUILTIN, LOW);   
  delay(500);
  digitalWrite(LED_BUILTIN, HIGH);  
  delay(500);                      
  digitalWrite(LED_BUILTIN, LOW);   
  delay(2000);
  // Y
  digitalWrite(LED_BUILTIN, HIGH);  
  delay(1500);                      
  digitalWrite(LED_BUILTIN, LOW);   
  delay(500);
  digitalWrite(LED_BUILTIN, HIGH);  
  delay(500);                      
  digitalWrite(LED_BUILTIN, LOW);   
  delay(500);
  digitalWrite(LED_BUILTIN, HIGH);  
  delay(1500);                      
  digitalWrite(LED_BUILTIN, LOW);   
  delay(500);
  digitalWrite(LED_BUILTIN, HIGH);  
  delay(1500);                      
  digitalWrite(LED_BUILTIN, LOW);   
  delay(2000);
  // A
  digitalWrite(LED_BUILTIN, HIGH);  
  delay(500);                      
  digitalWrite(LED_BUILTIN, LOW);   
  delay(500);
  digitalWrite(LED_BUILTIN, HIGH);  
  delay(1500);                      
  digitalWrite(LED_BUILTIN, LOW);   
  delay(2000);
  //N
  digitalWrite(LED_BUILTIN, HIGH);  
  delay(1500);                      
  digitalWrite(LED_BUILTIN, LOW);   
  delay(500);
  digitalWrite(LED_BUILTIN, HIGH);  
  delay(500);                      
  digitalWrite(LED_BUILTIN, LOW);   
  delay(500);
}
