#include <Servo.h>

int servoCount = 2;
int servoPins[] = {6,7};  /// pin 2 servo jaw   //pin 3 wrist  //pinr 
Servo servos[2];

void setup() {
  Serial.begin(9600);
  
  AttachServos();
  
  //servos[0].write(180);        ///wrist pin 6, jaw 7
 // servos[1].write(180);
   servos[0].write(125); 
   servos[1].write(75); 
  
}

void loop() {
}

void serialEvent() {
  int channel;
  int pos;
  
  channel = Serial.readStringUntil(':').toInt();
  pos = Serial.readString().toInt();
  servos[channel].write(pos);
  Serial.print(channel  );
  Serial.println(pos);
}

void AttachServos() {
  for(int i = 0; i < servoCount; i++) 
  {
    servos[i].attach(servoPins[i]);
  }
 }
