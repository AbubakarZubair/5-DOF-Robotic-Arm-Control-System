#include <Servo.h>
#define upplimit 100
#define lowerlimit 0
Servo jaw;
Servo wrist;
Servo shoulder;
Servo elbow;
Servo base;
void setup() {
jaw.write(5);
wrist.write(5);
shoulder.write(35);
elbow.write(90);
Serial.begin(9600); 
jaw.attach(7);
wrist.attach(6);
shoulder.attach(4);
elbow.attach(3);
base.attach(2);

Serial.println("Robotic Arm project made by : Iqra, Saaddam, Abu Bakar");
}
int jma;
int wma;
int sma;
int bma;
int ema;
void loop() {
 Serial.println("jaws motors");
  for( jma=0;jma<=75;jma=jma+5)
  {
    Serial.print(">");
    Serial.print("turning servo to ");
    Serial.println(jma);  
    jaw.write(jma);
    delay(1500);
  }
  for( jma=75;jma>=0;jma=jma-10)
  {
    Serial.print(">");
    Serial.print("turning servo to ");
    Serial.println(jma);
    jaw.write(jma);  
    delay(1500);
  }


   Serial.println("wrist motor");
  
    for( wma=0;wma<=125;wma=wma+5)
  {
    Serial.print(">");
    Serial.print("turning servo to ");
    Serial.println(wma);  
    wrist.write(wma);
    delay(1500);
  }
  for( wma=125;wma>=0;wma=wma-5)
  {
    Serial.print(">");
    Serial.print("turning servo to ");
    Serial.println(wma);
    wrist.write(wma);  
    delay(1500);
  }
   Serial.println("shoulder motor");
  
    for(sma=lowerlimit;sma<=upplimit;sma=sma+10)
  {
    Serial.print(">");
    Serial.print("turning servo to ");
    Serial.println(sma);  
    shoulder.write(sma);
    delay(1500);
  }
  for( sma=upplimit;sma>=lowerlimit;sma=sma-10)
  {
    Serial.print(">");
    Serial.print("turning servo to ");
    Serial.println(sma);
    shoulder.write(sma);  
    delay(1500);
  }
    Serial.println("base motor");
  
    for( bma=lowerlimit;bma<=upplimit;bma=bma+10)
  {
    Serial.print(">");
    Serial.print("turning servo to ");
    Serial.println(bma);  
    base.write(bma);
    delay(1000);
  }
  for( bma=upplimit;bma>=lowerlimit;bma=bma-10)
  {
    Serial.print(">");
    Serial.print("turning servo to ");
    Serial.println(bma);
    base.write(bma);  
    delay(1000);
  }
     Serial.println("elbow motor");
  
    for( ema=lowerlimit;ema<=upplimit;ema=ema+5)
  {
    Serial.print(">");
    Serial.print("turning servo to ");
    Serial.println(ema);  
    elbow.write(ema);
    delay(1000);
  }
  for( ema=upplimit;ema>=lowerlimit;ema=ema-5)
  {
    Serial.print(">");
    Serial.print("turning servo to ");
    Serial.println(ema);
    elbow.write(ema);  
    delay(1000);
  
  }
  }
