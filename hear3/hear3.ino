boolean statuslamp; 
boolean statulamp; 
boolean statlamp; 

void setup() {
   pinMode(12,OUTPUT);
   pinMode(11,OUTPUT);
   pinMode(9,OUTPUT);
   pinMode(8,OUTPUT);
   pinMode(7,OUTPUT);
   pinMode(10,OUTPUT);
   pinMode(A0,INPUT_PULLUP);
   statuslamp=false;
   statulamp=false;
   statlamp=false;
   Serial.begin(9600); 
}

void loop() {
   Serial.println (analogRead(A0)); 
  
   if(analogRead(A0)>80) { //white
      statuslamp=!statuslamp; 
      digitalWrite(12,statuslamp);
      delay(20);
   }
   if(analogRead(A0)>90) {
      statulamp=!statulamp; // yellow
      digitalWrite(11,statulamp);
      delay(20); 
   }
   if(analogRead(A0)>100) {
      statlamp=!statlamp;//green
      digitalWrite(10,statlamp);
      delay(20); 
}
   if(analogRead(A0)>110) {
      statlamp=!statlamp; // red
      digitalWrite(9,statlamp);
      delay(20); 
}
   if(analogRead(A0)>120) {
      statlamp=!statlamp; // blue
      digitalWrite(8,statlamp); 
      delay(20); 
}
}
