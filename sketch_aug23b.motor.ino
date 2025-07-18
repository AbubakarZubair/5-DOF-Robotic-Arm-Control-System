#include<Servo.h>
Servo motor;
int pos=0;
int state;
void setup() {
int state;

Serial.begin(9600);
while(!Serial);
motor.attach(9);
motor.write(pos);

}

void loop() {
  int state;
  for(pos=0;pos<=180;pos+=1)
  if(Serial.available())
  {
    int state=Serial.parselnt();
    if (state<1)
    {
      Serial.print(">");
      Serial.println(state);
      Serial.print("cannot execute command,too low number");
    
    }
    if (state>1&&state<180)
    {
      Serial.print(">");
      Serial.println(state);
      Serial.print("turning servo to");
      Serial.print(state);
      Serial.println("degree");
    }
  }
}
