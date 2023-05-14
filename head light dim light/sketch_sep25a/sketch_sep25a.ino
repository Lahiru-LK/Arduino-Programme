void setup() {
    pinMode(5,OUTPUT); 

}

void loop() {

int t=50 , y=255;
   analogWrite(5,t);
   delay(1000);
   analogWrite(5,y);
   delay(1000);
 
}
