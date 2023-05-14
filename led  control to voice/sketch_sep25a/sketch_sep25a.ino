String voice;
int RED = 2;
int WHITE = 3;
int GREEN = 4;





    void RedOn(){
      digitalWrite (RED, HIGH);
      }
    void RedOff(){
      digitalWrite (RED, LOW);
      }
    void GreenOn(){
      digitalWrite (GREEN, HIGH);
      }
    void GreenOff(){
      digitalWrite (GREEN, LOW);
      }
    void WhiteOn(){
      digitalWrite (WHITE, HIGH);
      }
    void WhiteOff(){
      digitalWrite (WHITE, LOW);
      }
    void allon() {
      digitalWrite (RED, HIGH);
      digitalWrite (GREEN, HIGH);
      digitalWrite (WHITE, HIGH);
      }
    void alloff() {
      digitalWrite (RED, LOW);
      digitalWrite (GREEN, LOW);
      digitalWrite (WHITE, LOW);
      }





    void setup() {
        Serial.begin(9600);
          pinMode(RED, OUTPUT);
          pinMode(GREEN, OUTPUT);
          pinMode(WHITE, OUTPUT);
          }




          
    void loop() {
        while(Serial.available()) {
        delay(10);
          char c=Serial.read();
          if(c=='#')
          {break; }
          voice += c;
          }




   if (voice.length() > 0) {
      Serial.println(voice);
      if (voice == "on" || voice == "all on")
      {
      allon() ;
      }
      else if (voice == "of" || voice=="all of")
      {
      alloff() ;
      } 
      else if(voice =="red light on" || voice =="red on"){
      RedOn();
      }
      else if(voice =="red light off"){
      RedOff();
      }
      else if(voice =="green light on" || voice =="green on"){
      GreenOn();
      }
      else if( voice =="green light off" ){
      GreenOff();
      }
      else if(voice =="white light on" || voice =="white on"){
      WhiteOn();
      }
      else if(voice =="white light off"){
      WhiteOff();
      }
      voice="";
      }
     }
