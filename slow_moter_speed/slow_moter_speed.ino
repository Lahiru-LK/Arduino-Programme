void setup() {

  pinMode(3,OUTPUT);  
  pinMode(5,OUTPUT);    
   
  pinMode(6,OUTPUT);   
  pinMode(9,OUTPUT);   
   
  
 
}
void loop() {
int q=200;
analogWrite(3,q);   //slow forwerd
analogWrite(5,q);
delay(2000);
digitalWrite(3,LOW);
digitalWrite(5,LOW);

analogWrite(6,q);   //slow back
analogWrite(9,q);
delay(2000);
digitalWrite(6,LOW);
digitalWrite(9,LOW);

}
