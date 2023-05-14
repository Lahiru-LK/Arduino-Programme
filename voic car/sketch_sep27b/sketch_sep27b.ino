
int q=200;

String voice;

int MOTER_INT4=3;   //analog right forward
int MOTER_INT2=5;   //analog left forward
int MOTER_INT3=12;   //analog right back6
int MOTER_INT1=13;   //analog left back9

int red1=2; //break light 1
int red2=4; //break light 1
int red3=7;  //break light 1
int red4=8;    //break light 1

int blue=9; //reverst light

int head_light=6; //head light and dim light 

int yellow_light12=10;       // signal and parking light on off
int yellow_light34=11;


//----------------------------------------------------------------------------------

void Slow_forward(){          //slow forward
    digitalWrite(9,LOW);
   digitalWrite(yellow_light12,LOW);
   digitalWrite(yellow_light34,LOW);


int b=300;
        
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

        

         
         analogWrite(MOTER_INT4,q);      
         analogWrite(MOTER_INT2,q);
         digitalWrite(MOTER_INT3,LOW);
         digitalWrite(MOTER_INT1,LOW);

        digitalWrite(2,LOW);
        digitalWrite(4,LOW);     
        digitalWrite(7,LOW);    
        digitalWrite(8,LOW);
  }       
 //-----------------------------     
       
      
     
 
 void go_forward(){                     //go forward
        
      int b=300; 
         digitalWrite(9,LOW);      
          digitalWrite(yellow_light12,LOW);
   digitalWrite(yellow_light34,LOW);


    
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
        
         
 
         
         digitalWrite(MOTER_INT4,HIGH);
         digitalWrite(MOTER_INT2,HIGH);
         digitalWrite(MOTER_INT3,LOW);
         digitalWrite(MOTER_INT1,LOW);
    
          digitalWrite(2,LOW);
        digitalWrite(4,LOW);     
        digitalWrite(7,LOW);    
        digitalWrite(8,LOW);    
    }  
   //----------------------------------   
      

      

    void come_back(){                     //come back
          int b=300;       
          digitalWrite(yellow_light12,LOW);
   digitalWrite(yellow_light34,LOW);


    
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
         
int w=500;
        
        digitalWrite(9,HIGH);
        delay(w);
        digitalWrite(9,LOW);
        delay(w);          
        digitalWrite(9,HIGH);
        delay(w);
        digitalWrite(9,LOW);

         digitalWrite(MOTER_INT4,LOW);
         digitalWrite(MOTER_INT2,LOW);
         digitalWrite(MOTER_INT3,HIGH);
         digitalWrite(MOTER_INT1,HIGH);
      
        delay(w); 
        digitalWrite(9,HIGH);
        delay(w);
        digitalWrite(9,LOW);
        delay(w);         digitalWrite(9,HIGH);
        delay(w);
        digitalWrite(9,LOW);
        delay(w);         digitalWrite(9,HIGH);
        delay(w);
        digitalWrite(9,LOW);
        delay(w);         digitalWrite(9,HIGH);
        delay(w);
        digitalWrite(9,LOW);
        delay(w);    
        digitalWrite(9,HIGH);
      

      
      }


 //---------------------------------------------------------------------------------
    void turn_left_forward(){                     //turn left forward
 digitalWrite(9,LOW);        
         digitalWrite(yellow_light34,LOW);
 int b=300;       
        
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
   

for(int k=1; k<5; k++){      digitalWrite(k,LOW);



      
float a=1;

  for(float t=1; t<256; t=t+1){
   
   analogWrite(10,t);
   
   delay(a);

    }

 {      analogWrite(10,255);
  
   delay(500);
       
      }
 
    

   for(float t=255; t>1; t=t-1){
   
      analogWrite(10,t);
   
   delay(a);
    }
    {      analogWrite(10,1);
 
   delay(400);
        
     digitalWrite(k,LOW); 
     
     }
 
}float a=1;
  for(float t=1; t<256; t=t+1){
   
      analogWrite(10,t);
 
   delay(a);

    }

 {      analogWrite(10,255);
 
   delay(500);
       
      }         
     digitalWrite(2,LOW);
    digitalWrite(4,LOW);     
    digitalWrite(7,LOW);    
    digitalWrite(8,LOW);
         digitalWrite(3,HIGH);
         digitalWrite(MOTER_INT2,LOW);
         digitalWrite(MOTER_INT3,LOW);
         digitalWrite(MOTER_INT1,LOW);
      
{                     //signal light on right


for(int k=1; k<5; k++){      digitalWrite(k,LOW);



      
float a=1;

  for(float t=1; t<256; t=t+1){
   
   analogWrite(10,t);
   
   delay(a);
          digitalWrite(3,HIGH);
         digitalWrite(MOTER_INT2,LOW);
         digitalWrite(MOTER_INT3,LOW);
         digitalWrite(MOTER_INT1,LOW);
    }

 {      analogWrite(10,255);
  
   delay(500);
           digitalWrite(3,HIGH);
         digitalWrite(MOTER_INT2,LOW);
         digitalWrite(MOTER_INT3,LOW);
         digitalWrite(MOTER_INT1,LOW);      
      }
 
    

   for(float t=255; t>1; t=t-1){
   
      analogWrite(10,t);
   
   delay(a);
    }
    {      analogWrite(10,1);
 
   delay(400);
        
     digitalWrite(k,LOW); 
     
             digitalWrite(3,HIGH);
         digitalWrite(MOTER_INT2,LOW);
         digitalWrite(MOTER_INT3,LOW);
         digitalWrite(MOTER_INT1,LOW);  }



 
}float a=1;
  for(float t=1; t<256; t=t+1){
   
      analogWrite(10,t);
 
   delay(a);

    }

 {      analogWrite(10,255);
 
   delay(500);

          digitalWrite(3,HIGH);
         digitalWrite(MOTER_INT2,LOW);
         digitalWrite(MOTER_INT3,LOW);
         digitalWrite(MOTER_INT1,LOW);         
 }
          digitalWrite(3,HIGH);
         digitalWrite(MOTER_INT2,LOW);
         digitalWrite(MOTER_INT3,LOW);
         digitalWrite(MOTER_INT1,LOW);
}}
 //-----------------------------------------------------------     
      
     
    void turn_right_forward(){                     //turn right forward
         digitalWrite(9,LOW);
            digitalWrite(yellow_light12,LOW);
        
         
 int b=300;       
        
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

for(int k=1; k<5; k++){      digitalWrite(k,LOW);



      
float a=1;

  for(float t=1; t<256; t=t+1){
   
   analogWrite(11,t);
   
   delay(a);

    }

 {      analogWrite(11,255);
  
   delay(500);
       
      }
 
    

   for(float t=255; t>1; t=t-1){
   
      analogWrite(11,t);
   
   delay(a);
    }
    {      analogWrite(11,1);
 
   delay(400);
        
     digitalWrite(k,LOW); 
     
     }
 
}float a=1;
  for(float t=1; t<256; t=t+1){
   
      analogWrite(11,t);
 
   delay(a);

    }

 {      analogWrite(11,255);
 
   delay(500);
       
      }
     digitalWrite(2,LOW);
    digitalWrite(4,LOW);     
    digitalWrite(7,LOW);    
    digitalWrite(8,LOW);
         
 
         digitalWrite(MOTER_INT4,LOW);
         digitalWrite(MOTER_INT2,HIGH);
         digitalWrite(MOTER_INT3,LOW);
         digitalWrite(MOTER_INT1,LOW);

for(int k=1; k<5; k++){      digitalWrite(k,LOW);



      
float a=1;

  for(float t=1; t<256; t=t+1){
   
   analogWrite(11,t);
   
   delay(a);

    }

 {      analogWrite(11,255);
  
   delay(500);
       
      }
 
    

   for(float t=255; t>1; t=t-1){
   
      analogWrite(11,t);
   
   delay(a);
    }
    {      analogWrite(11,1);
 
   delay(400);
        
     digitalWrite(k,LOW); 
     
     }
 
}
  for(float t=1; t<256; t=t+1){
   
      analogWrite(11,t);
 
   delay(a);

    }

 {      analogWrite(11,255);
 
   delay(500);
       
      }
 

   }
   
 //-------------------------------------------------------------------------   
    
    
    void turn_left_back(){                     //turn left back
 digitalWrite(9,LOW);        
         digitalWrite(yellow_light34,LOW);
 int b=300;
 int w=500;       
        
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
   

for(int k=1; k<5; k++){      digitalWrite(k,LOW);
        


      
float a=1;

  for(float t=1; t<256; t=t+1){
   
   analogWrite(10,t);
   
   delay(a);

    }

 {      analogWrite(10,255);
  
   delay(500);
       
      }
 
    

   for(float t=255; t>1; t=t-1){
   
      analogWrite(10,t);
   
   delay(a);
    }
    {      analogWrite(10,1);
 
   delay(400);
        
     digitalWrite(k,LOW); 
     
     }
 
}float a=1;
  for(float t=1; t<256; t=t+1){
   
      analogWrite(10,t);
 
   delay(a);

    }

 {      analogWrite(10,255);
 
   delay(500);
       
      }
        digitalWrite(9,HIGH);
        delay(w);
        digitalWrite(9,LOW);
        delay(w);          
        digitalWrite(9,HIGH);
        delay(w);
        digitalWrite(9,LOW);
        delay(w);         
        digitalWrite(9,HIGH);
        delay(w);
        digitalWrite(9,LOW);
        delay(w);    
        digitalWrite(9,HIGH);
               
     digitalWrite(2,LOW);
    digitalWrite(4,LOW);     
    digitalWrite(7,LOW);    
    digitalWrite(8,LOW);
         digitalWrite(MOTER_INT4,LOW);
         digitalWrite(MOTER_INT2,LOW);
         digitalWrite(MOTER_INT3,HIGH);
         digitalWrite(MOTER_INT1,LOW);

{                     //signal light on right


for(int k=1; k<5; k++){      digitalWrite(k,LOW);
        
      


      
float a=1;

  for(float t=1; t<256; t=t+1){
   
   analogWrite(10,t);
   
   delay(a);

    }

 {      analogWrite(10,255);
  
   delay(500);
       
      }
 
    

   for(float t=255; t>1; t=t-1){
   
      analogWrite(10,t);
   
   delay(a);
    }
    {      analogWrite(10,1);
 
   delay(400);
        
     digitalWrite(k,LOW); 
     
     }
 
}float a=1;
  for(float t=1; t<256; t=t+1){
   
      analogWrite(10,t);
 
   delay(a);

    }

 {      analogWrite(10,255);
 
   delay(500);



 }

}
}
 //-------------------------------------------------------------------------     
      
      
      
    void turn_right_back(){                     //turn right back
           digitalWrite(9,LOW);
            digitalWrite(yellow_light12,LOW);
        
         
 int b=300;
 int w=500;       
        
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
       

for(int k=1; k<5; k++){      digitalWrite(k,LOW);



      
float a=1;

  for(float t=1; t<256; t=t+1){
   
   analogWrite(11,t);
   
   delay(a);

    }

 {      analogWrite(11,255);
  
   delay(500);
       
      }
 
    

   for(float t=255; t>1; t=t-1){
   
      analogWrite(11,t);
   
   delay(a);
    }
    {      analogWrite(11,1);
 
   delay(400);
        
     digitalWrite(k,LOW); 
     
     }
 
}float a=1;
  for(float t=1; t<256; t=t+1){
   
      analogWrite(11,t);
 
   delay(a);

    }

 {      analogWrite(11,255);
 
   delay(500);
       
      }       

        digitalWrite(9,HIGH);
        delay(w);
        digitalWrite(9,LOW);
        delay(w);          
        digitalWrite(9,HIGH);
        delay(w);
        digitalWrite(9,LOW);
        delay(w);         
        digitalWrite(9,HIGH);
        delay(w);
        digitalWrite(9,LOW);
        delay(w);    
        digitalWrite(9,HIGH);
         
    digitalWrite(2,LOW);
    digitalWrite(4,LOW);     
    digitalWrite(7,LOW);    
    digitalWrite(8,LOW);        
         
         
         digitalWrite(MOTER_INT4,LOW);
         digitalWrite(MOTER_INT2,LOW);
         digitalWrite(MOTER_INT3,LOW);
         digitalWrite(MOTER_INT1,HIGH);
     
 
for(int k=1; k<5; k++){      digitalWrite(k,LOW);



      
float a=1;

  for(float t=1; t<256; t=t+1){
   
   analogWrite(11,t);
   
   delay(a);

    }

 {      analogWrite(11,255);
  
   delay(500);
       
      }
 
    

   for(float t=255; t>1; t=t-1){
   
      analogWrite(11,t);
   
   delay(a);
    }
    {      analogWrite(11,1);
 
   delay(400);
        
     digitalWrite(k,LOW); 
     
     }
 
} 
  for(float t=1; t<256; t=t+1){
   
      analogWrite(11,t);
 
   delay(a);

    }

 {      analogWrite(11,255);
 
   delay(500);
       
      }
 

  }     
      
      

//--------------------------------------------------------
    void stop_car(){                     //stop all moter
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

  
         
         digitalWrite(MOTER_INT4,LOW);
         digitalWrite(MOTER_INT2,LOW);
         digitalWrite(MOTER_INT3,LOW);
         digitalWrite(MOTER_INT1,LOW);


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

//---------------------------------------------------------------------      
      
       
  void hello(){                     //moter forward or back 
         

          
          
          for(int i=30; i>1; i--){
        
        

             digitalWrite(i,LOW);
             delay(10);
             
               
            
          digitalWrite(MOTER_INT4,HIGH);
          digitalWrite(MOTER_INT2,HIGH);
          digitalWrite(MOTER_INT3,LOW);
          digitalWrite(MOTER_INT1,LOW);
          delay(100);  





          digitalWrite(MOTER_INT4,LOW);
          digitalWrite(MOTER_INT2,LOW);
          digitalWrite(MOTER_INT3,HIGH);
          digitalWrite(MOTER_INT1,HIGH);
          delay(100);
         
digitalWrite(i,LOW);
          }

         digitalWrite(MOTER_INT4,LOW);
         digitalWrite(MOTER_INT2,LOW);
         digitalWrite(MOTER_INT3,LOW);
         digitalWrite(MOTER_INT1,LOW);
        
        digitalWrite(2,HIGH);
        digitalWrite(4,HIGH);     
        digitalWrite(7,HIGH);    
        digitalWrite(8,HIGH);

      
      }
//------------------------------------------------------------------------
     void brake_light_on(){                     //brake light on 
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
 
 
 
 void brake_light_off(){           //brake light off
  
        digitalWrite(2,LOW);
        digitalWrite(4,LOW);     
        digitalWrite(7,LOW);    
        digitalWrite(8,LOW);  

 }
void reverse_light_on(){           //reverst light on
       int w=500;
        
        digitalWrite(9,HIGH);
        delay(w);
        digitalWrite(9,LOW);
        delay(w);          
        digitalWrite(9,HIGH);
        delay(w);
        digitalWrite(9,LOW);
        delay(w); 
        digitalWrite(9,HIGH);
        delay(w);
        digitalWrite(9,LOW);
        delay(w);         digitalWrite(9,HIGH);
        delay(w);
        digitalWrite(9,LOW);
        delay(w);         digitalWrite(9,HIGH);
        delay(w);
        digitalWrite(9,LOW);
        delay(w);         digitalWrite(9,HIGH);
        delay(w);
        digitalWrite(9,LOW);
        delay(w);    
        digitalWrite(9,HIGH);
    
 }

void reverse_light_off(){           //reverst light off
  
              digitalWrite(9,LOW);  

        }  
   
    
void head_ligh(){                     //head ligh
      
       analogWrite(head_light,255);
      
      }

void dim_ligh(){                     //dim ligh
      
       analogWrite(head_light,50);
      
      }

void ligh_off(){                     //head and dim ligh off 
      
       analogWrite(head_light,0);
      
      }

void parking_light_on(){                     //parking ligh on

for(int i=1; i<10; i++){      digitalWrite(i,LOW);



      
float a=1;

  for(float t=1; t<256; t=t+1){
   
   analogWrite(10,t);
   analogWrite(11,t);
   delay(a);

    }

 {      analogWrite(10,255);
   analogWrite(11,255);
   delay(500);
       
      }
 
    

   for(float t=255; t>1; t=t-1){
   
      analogWrite(10,t);
   analogWrite(11,t);
   delay(a);
    }
    {      analogWrite(10,1);
   analogWrite(11,1);
   delay(400);
        
     digitalWrite(i,LOW); 
     
     }
 
}float a=1;
  for(float t=1; t<256; t=t+1){
   
      analogWrite(10,t);
   analogWrite(11,t);
   delay(a);

    }

 {      analogWrite(10,255);
   analogWrite(11,255);
   delay(500);
       
      }
 

}
   


void parking_light_off(){                     //parking_ligh_off
      
   digitalWrite(yellow_light12,LOW);
   digitalWrite(yellow_light34,LOW);
      
      }




void signal_light_on_left(){                     //signal light on left


for(int k=1; k<10; k++){      digitalWrite(k,LOW);



      
float a=1;

  for(float t=1; t<256; t=t+1){
   
   analogWrite(10,t);
   
   delay(a);

    }

 {      analogWrite(10,255);
  
   delay(500);
       
      }
 
    

   for(float t=255; t>1; t=t-1){
   
      analogWrite(10,t);
   
   delay(a);
    }
    {      analogWrite(10,1);
 
   delay(400);
        
     digitalWrite(k,LOW); 
     
     }
 
}float a=1;
  for(float t=1; t<256; t=t+1){
   
      analogWrite(10,t);
 
   delay(a);

    }

 {      analogWrite(10,255);
 
   delay(500);
       
      }
 

}




void signal_light_on_right(){                     //signal light on right



for(int k=1; k<10; k++){      digitalWrite(k,LOW);



      
float a=1;

  for(float t=1; t<256; t=t+1){
   
   analogWrite(11,t);
   
   delay(a);

    }

 {      analogWrite(11,255);
  
   delay(500);
       
      }
 
    

   for(float t=255; t>1; t=t-1){
   
      analogWrite(11,t);
   
   delay(a);
    }
    {      analogWrite(11,1);
 
   delay(400);
        
     digitalWrite(k,LOW); 
     
     }
 
}float a=1;
  for(float t=1; t<256; t=t+1){
   
      analogWrite(11,t);
 
   delay(a);

    }

 {      analogWrite(11,255);
 
   delay(500);
       
      }
 

}


void signal_light_off(){                     //signal_ligh_off
      
   digitalWrite(yellow_light12,LOW);
   digitalWrite(yellow_light34,LOW);
      
      }



void thank_you(){                     //Thbakssss
      
   digitalWrite(9,LOW);
   digitalWrite(yellow_light12,LOW);
   digitalWrite(yellow_light34,LOW);

        digitalWrite(2,LOW);
        digitalWrite(4,LOW);     
        digitalWrite(7,LOW);    
        digitalWrite(8,LOW);

   digitalWrite(10,LOW);
   digitalWrite(11,LOW);


digitalWrite(6,LOW);
 


        digitalWrite(3,LOW);
        digitalWrite(5,LOW);     
        digitalWrite(12,LOW);    
        digitalWrite(13,LOW);


int j=100;
   digitalWrite(9,HIGH);
   delay(j);
   digitalWrite(9,LOW);
   digitalWrite(9,HIGH);
   delay(j);
   
   digitalWrite(9,LOW);

           digitalWrite(3,LOW);
        digitalWrite(5,LOW); 
        delay(j);    
        digitalWrite(12,HIGH);    
        digitalWrite(13,HIGH); 
delay(j);
                 digitalWrite(6,HIGH);
    delay(j);
     digitalWrite(6,LOW);
                
                digitalWrite(3,LOW);
        digitalWrite(5,LOW);     
        digitalWrite(12,LOW);    
        digitalWrite(13,LOW);
   digitalWrite(yellow_light12,HIGH);
   digitalWrite(yellow_light34,HIGH);
   delay(50);
   
   digitalWrite(yellow_light12,LOW);
   digitalWrite(yellow_light34,LOW);
   delay(j);

   digitalWrite(6,HIGH);
    
   
        digitalWrite(3,HIGH);
        digitalWrite(5,HIGH); 
        delay(50) ; 
  digitalWrite(6,LOW);
          
        digitalWrite(12,LOW);    
        digitalWrite(13,LOW);
                delay(j) ;  
                digitalWrite(3,LOW);
        digitalWrite(5,LOW);     
        digitalWrite(12,LOW);    
        digitalWrite(13,LOW);           
        digitalWrite(6,HIGH);
    delay(j);
     digitalWrite(6,LOW); 
      

   digitalWrite(9,HIGH);
   delay(j);
   digitalWrite(9,LOW);
   digitalWrite(9,HIGH);
   delay(j);
   
   digitalWrite(9,LOW);

           digitalWrite(3,LOW);
        digitalWrite(5,LOW); 
        delay(j);    
        digitalWrite(12,HIGH);    
        digitalWrite(13,HIGH); 
delay(j);
                 digitalWrite(6,HIGH);
    delay(j);
     digitalWrite(6,LOW);
                
                digitalWrite(3,LOW);
        digitalWrite(5,LOW);     
        digitalWrite(12,LOW);    
        digitalWrite(13,LOW);
   digitalWrite(yellow_light12,HIGH);
   digitalWrite(yellow_light34,HIGH);
   delay(50);
   
   digitalWrite(yellow_light12,LOW);
   digitalWrite(yellow_light34,LOW);
   delay(j);

   digitalWrite(6,HIGH);
    
   
        digitalWrite(3,HIGH);
        digitalWrite(5,HIGH); 
        delay(50) ; 
  digitalWrite(6,LOW);
          
        digitalWrite(12,LOW);    
        digitalWrite(13,LOW);
                delay(j) ;  
                digitalWrite(3,LOW);
        digitalWrite(5,LOW);     
        digitalWrite(12,LOW);    
        digitalWrite(13,LOW);           
        digitalWrite(6,HIGH);
    delay(j);
     digitalWrite(6,LOW); 
      
      
      
      
      
         digitalWrite(9,LOW);
   digitalWrite(yellow_light12,LOW);
   digitalWrite(yellow_light34,LOW);

        digitalWrite(2,LOW);
        digitalWrite(4,LOW);     
        digitalWrite(7,LOW);    
        digitalWrite(8,LOW);

   digitalWrite(10,LOW);
   digitalWrite(11,LOW);


digitalWrite(6,LOW);
 


        digitalWrite(3,LOW);
        digitalWrite(5,LOW);     
        digitalWrite(12,LOW);    
        digitalWrite(13,LOW);

      
      
      
      
      
      
      
      
      
      }

         
//-----------------------------------------------------------------------------------------------------


    void setup() {
        Serial.begin(9600);
          pinMode(MOTER_INT4, OUTPUT);
          pinMode(MOTER_INT2, OUTPUT);
          pinMode(MOTER_INT3, OUTPUT);
          pinMode(MOTER_INT1, OUTPUT);
          

          pinMode(2, OUTPUT);
          pinMode(4, OUTPUT);
          pinMode(7, OUTPUT);
          pinMode(8, OUTPUT);
       
          pinMode(blue,OUTPUT);

          pinMode(6,OUTPUT);

          
          pinMode(yellow_light12,OUTPUT);
          pinMode(yellow_light34,OUTPUT);
          
          }

    

//------------------------------------------------------------------------------------------------------   
           
    void loop(){    
        while(Serial.available()) {
        delay(10);
          char c=Serial.read();
          if(c=='#')  
          {break; }
          voice += c;
}
      if (voice.length() > 0) {
        Serial.println(voice);

      
    if (voice == "slow forward" || voice == "clovate"|| voice == "slower"|| voice == "slow over"|| voice == "so far away"|| voice == "so forth"|| voice == "swap forward"|| voice == "slow overt" || voice == "slow pervert")
      {
      Slow_forward() ;
      }


    else if (voice == "go forward" || voice == "go over"|| voice == "go4"|| voice == "go for it"|| voice == "go"|| voice == "go hot"|| voice == "go for it")
      {
      go_forward() ;
      }
    else if (voice == "come back" || voice == "back")
      {
      come_back() ;
      }
    else if (voice == "turn left forward" ||voice == "turn left foot" || voice == "turn left for what" || voice == "turn left for it" || voice == "left forward"|| voice == "lift Ford"|| voice == "lift forward")
      {
      turn_left_forward() ;
      }

    else if (voice == "turn right forward" ||voice == "turn right for" || voice == "10th right forward" || voice == "right forward")
      {
      turn_right_forward() ;
      }
    else if (voice == "turn left back" || voice == "left back"|| voice == "lift back" || voice == "left-back")
      {
      turn_left_back() ;
      }

    else if (voice == "turn right back" || voice == "right back")
      {
      turn_right_back() ;
      }
    else if (voice == "stop" || voice == "stop car"|| voice == "stop.")
      {
      stop_car() ;
      }
    else if (voice == "hello" || voice == "hello car")
      {
      hello() ;
      }  

    else if (voice == "break light on" || voice == "break light" || voice == "brake light" || voice == "brake light on" || voice == "great light on")
      {
      brake_light_on() ;
      } 
      
    else if (voice == "break light off" || voice == "break off" || voice == "brake off" || voice == "brake light off" || voice == "great light off")
      {
      brake_light_off() ;
      }

   else if (voice == "reverse light on" || voice == "reverse light" || voice == "previous light" || voice == "previous light" || voice == "cleavers light on" )
      {
      reverse_light_on() ;
      } 
      
    else if (voice == "reverse light off"|| voice == "reverse light of" || voice == "prevers light off" || voice == "previous light off")
      {
      reverse_light_off() ;
      }
    
    else if (voice == "headlight"|| voice == "red light on"||  voice == "headlight on"|| voice == "head light on")
      {
      head_ligh() ;
      }
    else if (voice == "dim light"|| voice == "dim light on")
      {
      dim_ligh() ;
      }

    else if (voice == "light of" || voice == "light off")
      {
     ligh_off() ;
      }

    else if (voice == "parking light on" || voice == "parking light")
      {
     parking_light_on() ;
      }

    else if (voice == "parking light off" || voice == "parking light of")
      {
     parking_light_off() ;
      }


    else if (voice == "signal light left" || voice == "left signal"|| voice == "lift signal"|| voice == "left signal light on"|| voice == "lift signal light on")
      {
     signal_light_on_left() ;
      }

    else if (voice == "signal light right" || voice == "right signal"|| voice == "tried signal"||  voice == "fried signal"||voice == "right signal light on" || voice == "pight signal light "|| voice == "pight signal light on"|| voice == "find signal light on" || voice == "flight signal light on")
      {
     signal_light_on_right() ;
      }

    else if (voice == "signal light off" || voice == "signal light of")
      {
     signal_light_off() ;
      }
    else if (voice == "thank you" || voice == "thanks")
      {
     thank_you() ;
      }
    
        voice="";
      
     }
    }
   
    

 
