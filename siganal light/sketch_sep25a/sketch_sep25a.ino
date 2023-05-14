void setup() {
    pinMode(6,OUTPUT); 

}

void loop() {

int a=1;

  for(float t=0; t<256; t=t+1){
   
   analogWrite(6,t);
   delay(a);

    }


    {   analogWrite(6,0);
   delay(400);
       
      }
 

  
 

}
