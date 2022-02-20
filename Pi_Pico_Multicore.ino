
 // core0 
 
 void setup() {
  Serial.begin(115200);
  delay(500);
 }

 void loop() {
  
  Serial.println(" Hello from loop ") ;
  delay(1000);
 }

//------------------------------------//

 // core1

 void loop1() {
  Serial.println(" World from loop 1 !!") ;
  delay(1000);
 }
