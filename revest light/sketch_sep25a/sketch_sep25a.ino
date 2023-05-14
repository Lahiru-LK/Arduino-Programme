void setup() {
    pinMode(6,OUTPUT); 

}

void loop() {

float a=0.1;

  for(float t=1; t<256; t=t+1){
   
   analogWrite(6,t);
   delay(a);

    }

 {   analogWrite(6,255);
   delay(500);
       
      }
 
    

   for(float t=255; t>1; t=t-1){
   
   analogWrite(6,t);
   delay(a);
    }
    {   analogWrite(6,0);
   delay(400);
        
      }
 

}
