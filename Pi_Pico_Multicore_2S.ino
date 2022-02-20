
 // core0 
 
 void setup() {
  Serial.begin(115200);
  delay(500);
 }

 void loop() {
  
  Serial.println(" Hello from core 0") ;
  delay(1000);
 }

//------------------------------------//

 // core1
 
 void setup1() {
 Serial1.begin(115200);
  delay(500);
 }

 void loop1() {
  Serial1.println(" World from core 1 !!") ;
  delay(1000);
 }
