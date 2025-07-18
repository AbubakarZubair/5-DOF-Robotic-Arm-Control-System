#include <Servo.h>
Servo myservo1;
Servo myservo2;
int pos=0;
void setup()
{
Serial.begin(9600);
myservo1.attach(9);
myservo2.attach(7);
}
int state=0;
int abc=0;
int def=0;
int cba=0;
void loop()
{
for( state=0;state<=30;state+=2)
{
  Serial.print(">");
  Serial.println(state);
  Serial.print("turning servo to ");
  Serial.print(state);
  Serial.println(" degrees");
  myservo1.write(state);
  if(state>=0||state<=10){
    abc=0;
    Serial.print(">");
  Serial.println(abc);
  Serial.print("turning servo to ");
  Serial.print(abc);
  Serial.println(" degrees");
  myservo2.write(abc);}
   if(state>10||state<=20){
    abc=45;
    Serial.print(">");
  Serial.println(abc);
  Serial.print("turning servo to ");
  Serial.print(abc);
  Serial.println(" degrees");
  myservo2.write(abc);}
   if(state>20||state<=30){
    abc=90;
    Serial.print(">");
  Serial.println(abc);
  Serial.print("turning servo to ");
  Serial.print(abc);
  Serial.println(" degrees");
  myservo2.write(abc);}
  delay(800);
  }
  for( def=30;def>=0;def=def-2){
  Serial.print(">");
  Serial.println(def);
  Serial.print("turning servo to ");
  Serial.print(def);
  Serial.println(" degrees");
  myservo1.write(def);
  if(def<=30||def>20){
  cba=90;
  Serial.print(">");
  Serial.println(cba);
  Serial.print("turning servo to ");
  Serial.print(cba);
  Serial.println(" degrees");
  myservo2.write(cba);
  }
   if(def<=20||def>10){
  cba=45;
  Serial.print(">");
  Serial.println(cba);
  Serial.print("turning servo to ");
  Serial.print(cba);
  Serial.println(" degrees");
  myservo2.write(cba);
  }
   if(def<=10||def>=0){
  cba=0;
  Serial.print(">");
  Serial.println(cba);
  Serial.print("turning servo to ");
  Serial.print(cba);
  Serial.println(" degrees");
  myservo2.write(cba);
  }
  delay(800);
  }

}
