#include <Servo.h>
Servo servo;
int pos=0;
void setup()
{
Serial.begin(9600);
servo.attach(9);
  // put your setup code here, to run once:

}

void loop()
{
        if (Serial.available())
  {
int state = Serial.parseInt();
   
if (state < 0)

{
Serial.print(">");
Serial.println(state);
Serial.println("cannost execute command, too low number");

}
if (state >= 0 && state <= 90)
{
  Serial.print(">");
  Serial.println(state);
  Serial.print("turning servo to ");
  Serial.print(state);
  Serial.println(" degrees");
  servo.write(state);
  // put your main code here, to run repeatedly:

}
  servo.write(0);
  delay (2000);
      Serial.print(">");
      Serial.println(0);
      Serial.print("turning servo to ");
      Serial.print(0);
      Serial.println(" degree");
  servo.write(45);
  delay (2000);
      Serial.print(">");
      Serial.println(45);
      Serial.print("turning servo to  ");
      Serial.print(45);
      Serial.println("  degree");
  servo.write(90);
  delay (2000);
      Serial.print(">");
      Serial.println(90);
      Serial.print(" turning servo to ");
      Serial.print(90);
      Serial.println(" degree");
  servo.write(45);
  delay (2000);
      Serial.print(">");
      Serial.println(45);
      Serial.print("turning servo to ");
      Serial.print(45);
      Serial.println(" degree");

    


}
}
 
