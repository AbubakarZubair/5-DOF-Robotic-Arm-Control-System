#include <Servo.h>
Servo servo;
int pos=0;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
servo.attach(9);
}

void loop() {
  // put your main code here, to run repeatedly:
if (Serial.available())
{
  int state =Serial.parseInt();
  if (state<0)
  {

    Serial.print(">");
    Serial.println(state);
    Serial.println("cannot execute commomd ,too low number");
    
  }
  if (state=0)
  {
     Serial.print(">");
    Serial.println(0);
    Serial.println("turnig servo to");
    Serial.print(0);
    Serial.println("degree");
    servo.write(0);
    }
  if (state=1)
  {

     Serial.print(">");
    Serial.println(45);
    Serial.println("turnig servo to");
    Serial.print(45);
    Serial.println("degree");
    servo.write(45);
    }
      if (state=2)
  {
     servo.write(90);
     Serial.print(">");
    Serial.println(90);
    Serial.println("turnig servo to");
    Serial.print(90);
    Serial.println("degree");
    servo.write(90);
    }
  
}
}
