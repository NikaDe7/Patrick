boolean statuslamp; 
boolean statulamp; 
boolean statlamp; 

void setup() {
   pinMode(12,OUTPUT);
   pinMode(11,OUTPUT);
   pinMode(9,OUTPUT);
   pinMode(8,OUTPUT);
   pinMode(10,OUTPUT);
   pinMode(A0,INPUT_PULLUP);
   statuslamp=false;
   statulamp=false;
   statlamp=false;
   Serial.begin(9600);
}

void loop() {
   Serial.println (analogRead(A0)); 
  
   if(analogRead(A0)>90) {
      statuslamp=!statuslamp; // yellow
      digitalWrite(12,statuslamp); 
      delay(20); 
   }
   if(analogRead(A0)>100) {
      statulamp=!statulamp; // red
      digitalWrite(11,statulamp);
      digitalWrite(9,statulamp);
      delay(20);
   }
   if(analogRead(A0)>110) {
      statlamp=!statlamp; // blue
      digitalWrite(10,statlamp);
      digitalWrite(8,statlamp); 
      delay(20); 
}
}
