void setup() {
      pinMode(2,OUTPUT); 
       pinMode(4,OUTPUT); 
          pinMode(7,OUTPUT); 
             pinMode(8,OUTPUT);

}

void loop() {
        int b=300;
        
        digitalWrite(2,HIGH);
        digitalWrite(4,HIGH);     
        digitalWrite(7,HIGH);    
        digitalWrite(8,HIGH);
        delay(1000);     

        digitalWrite(2,LOW);
        digitalWrite(4,HIGH);     
        digitalWrite(7,HIGH);    
        digitalWrite(8,HIGH);
        delay(b);
        
        digitalWrite(2,LOW);
        digitalWrite(4,LOW);     
        digitalWrite(7,HIGH);    
        digitalWrite(8,HIGH);
        delay(b);

        digitalWrite(2,LOW);
        digitalWrite(4,LOW);     
        digitalWrite(7,LOW);    
        digitalWrite(8,HIGH);
        delay(b);

//-----------------------------
        digitalWrite(2,HIGH);
        digitalWrite(4,HIGH);     
        digitalWrite(7,HIGH);    
        digitalWrite(8,HIGH);
        delay(1000);   

        digitalWrite(2,HIGH);
        digitalWrite(4,HIGH);     
        digitalWrite(7,HIGH);    
        digitalWrite(8,LOW);
        delay(b);  

        digitalWrite(2,HIGH);
        digitalWrite(4,HIGH);     
        digitalWrite(7,LOW);    
        digitalWrite(8,LOW);
        delay(b);

        digitalWrite(2,HIGH);
        digitalWrite(4,LOW);     
        digitalWrite(7,LOW);    
        digitalWrite(8,LOW);
        delay(b);

        digitalWrite(2,HIGH);
        digitalWrite(4,HIGH);     
        digitalWrite(7,HIGH);    
        digitalWrite(8,HIGH);
        delay(1000);        
//----------------------------------------------
        digitalWrite(2,HIGH);
        digitalWrite(4,LOW);     
        digitalWrite(7,LOW);    
        digitalWrite(8,HIGH);
        delay(b);


        digitalWrite(2,LOW);
        digitalWrite(4,HIGH);     
        digitalWrite(7,HIGH);    
        digitalWrite(8,LOW);
        delay(b);


        digitalWrite(2,HIGH);
        digitalWrite(4,LOW);     
        digitalWrite(7,LOW);    
        digitalWrite(8,HIGH);
        delay(b);


        digitalWrite(2,LOW);
        digitalWrite(4,HIGH);     
        digitalWrite(7,HIGH);    
        digitalWrite(8,LOW);
        delay(b); 

digitalWrite(2,HIGH);
        digitalWrite(4,LOW);     
        digitalWrite(7,LOW);    
        digitalWrite(8,HIGH);
        delay(b);


        digitalWrite(2,LOW);
        digitalWrite(4,HIGH);     
        digitalWrite(7,HIGH);    
        digitalWrite(8,LOW);
        delay(b);


        digitalWrite(2,HIGH);
        digitalWrite(4,LOW);     
        digitalWrite(7,LOW);    
        digitalWrite(8,HIGH);
        delay(b);


        digitalWrite(2,LOW);
        digitalWrite(4,HIGH);     
        digitalWrite(7,HIGH);    
        digitalWrite(8,LOW);
        delay(b);

        digitalWrite(2,HIGH);
        digitalWrite(4,HIGH);     
        digitalWrite(7,HIGH);    
        digitalWrite(8,HIGH);
        delay(1000);              
      
}
