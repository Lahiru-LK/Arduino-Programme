char val;
int q=200;
 
void setup() {
pinMode(3,OUTPUT);   //left motors forward 
pinMode(5,OUTPUT);   //left motors forward 
pinMode(6,OUTPUT);   //right motors reverse 
pinMode(9,OUTPUT);   //right motors reverse 

Serial.begin(9600);
 
}
 
void loop() {
if(Serial.available()){
  val = Serial.read();
  Serial.println(val);
}
 
if (val == 'a'){      //slow forwerd
  

  analogWrite(3,q);  
  analogWrite(5,q);
  digitalWrite(6,LOW);
  digitalWrite(9,LOW);
}

else if(val == 'b'){     //slow back

    digitalWrite(3,LOW);
    digitalWrite(5,LOW);
    analogWrite(6,q);   
    analogWrite(9,q);

}


else if(val == '1'){            //lest go)
  digitalWrite(3,HIGH);
  digitalWrite(5,HIGH);
  digitalWrite(6,LOW);
  digitalWrite(9,LOW);
}
 
else if(val == '2'){      //lest back
  
  digitalWrite(6,HIGH);
  digitalWrite(9,HIGH);
  digitalWrite(3,LOW);
  digitalWrite(5,LOW);
}
 
else if(val == '4'){      // left go 
  
  digitalWrite(3,HIGH);
  digitalWrite(5,LOW);
  digitalWrite(6,LOW);
  digitalWrite(9,LOW);
}

else if(val == '3'){      // Righ go
  
  digitalWrite(3,LOW);
  digitalWrite(5,HIGH);
  digitalWrite(6,LOW);
  digitalWrite(9,LOW);
}

else if(val == '6'){      // left back
  
  digitalWrite(3,LOW);
  digitalWrite(5,LOW);
  digitalWrite(6,HIGH);
  digitalWrite(9,LOW);
}

else if(val == '5'){      // Righ Back
  
  digitalWrite(3,LOW);
  digitalWrite(5,LOW);
  digitalWrite(6,LOW);
  digitalWrite(9,HIGH);
}

else if(val == '7'){      // stop
  
  digitalWrite(3,LOW);
  digitalWrite(5,LOW);
  digitalWrite(6,LOW);
  digitalWrite(9,LOW);
}


else if(val == '8'){      // stop or star ress car
  
  digitalWrite(3,HIGH);
  digitalWrite(5,HIGH);
  digitalWrite(6,LOW);
  digitalWrite(9,LOW);
  delay(100);
  digitalWrite(3,LOW);
  digitalWrite(5,LOW);
  digitalWrite(6,HIGH);
  digitalWrite(9,HIGH);
  delay(100);
}

}
