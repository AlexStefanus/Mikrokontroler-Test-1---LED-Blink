#define LED 2
 void setup() {
   pinMode(LED,OUTPUT);
    }   
    
    void loop() {
       delay(100); 
       digitalWrite(LED,HIGH);
        delay(100);
         digitalWrite(LED,LOW); }
