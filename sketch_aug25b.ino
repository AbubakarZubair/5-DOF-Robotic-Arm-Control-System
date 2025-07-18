#include <Servo.h>
Servo myservo1;
Servo myservo2;
int pos=0;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
myservo1.attach(9);
myservo2.attach(7);
int state=0;
int abc=0; 
}

void loop() {
  // put your main code here, to run repeatedly:
/*if(Serial.available()){
  int state =Serial.parseInt();
  if(state<0){
    Serial.print(">");
    Serial.println(state);
    Serial.println("cannot execute command");
  }*/
 for(int state=0;state<=30;state+=2){
  Serial.print(">");
  Serial.println(state);
  Serial.print("turning servo to ");
  Serial.print(state);
  Serial.println(" degrees");
  myservo1.write(state);
  delay(800);
  }
  for(int def=30;def>=0;def=def-2){
  Serial.print(">");
  Serial.println(def);
  Serial.print("turning servo to ");
  Serial.print(def);
  Serial.println(" degrees");
  myservo1.write(def);
  delay(800);
  }
  for(int abc=0;abc<=90;abc=abc+45){
  Serial.print(">");
  Serial.println(abc);
  Serial.print("turning servo to ");
  Serial.print(abc);
  Serial.println(" degrees");
  myservo2.write(abc);
  delay(1000);

  }
   for(int cba=90;cba>=0;cba=cba-45){
  Serial.print(">");
  Serial.println(cba);
  Serial.print("turning servo to ");
  Serial.print(cba);
  Serial.println(" degrees");
  myservo2.write(cba);
  delay(1000);

  }
  
}
