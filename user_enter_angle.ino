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
if (state == 0)
{
  Serial.print(">");
  Serial.println(0);
  Serial.print("turning servo to ");
  Serial.print(0);
  Serial.println(" degrees");
  servo.write(0);
  // put your main code here, to run repeatedly:

}
if (state == 1)
{
  Serial.print(">");
  Serial.println(45);
  Serial.print("turning servo to ");
  Serial.print(45);
  Serial.println(" degrees");
  servo.write(45);
  // put your main code here, to run repeatedly:

}
if (state == 2)
{
  Serial.print(">");
  Serial.println(90);
  Serial.print("turning servo to ");
  Serial.print(90);
  Serial.println(" degrees");
  servo.write(90);
  // put your main code here, to run repeatedly:
}
}
}
