#include <Servo.h>
Servo base;
Servo shoulder;
Servo elbow;
Servo jaw;
Servo wrist;
void setup() {
Serial.begin(9600);
jaw.attach(7);
shoulder.attach(2);
elbow.attach(3);
base.attach(4);
wrist.attach(6);

Serial.println("Robotic Arm project made by : Iqra, Saaddam & Abu Bakar");
}
int jma;
int wma;
int sma;
int ema;
int bma;
void loop() {
 //Serial.println("bmotors");
  //for( bma=0;bma<=60;bma=bma+5)
  //{
    //Serial.print(">");
    //Serial.print("turning servo to ");
    //Serial.println(jma);  
    jaw.write(jma);
    if (bma=10){
      sma=70;
      ema=20;
      wma=10;
      jma=55;
    }
    else if(bma=40)
    {
      sma=10;
      ema=10;
      wma=10;
      jma=55;
    }
    else
    {
      sma=70;
      ema=20;
      wma=10;
      jma=55;
    }
    delay(500);
  }
  /*for( jma=75;jma>=0;jma=jma-10)
  {
    Serial.print(">");
    Serial.print("turning servo to ");
    Serial.println(jma);
    jaw.write(jma);  
    delay(200);
  }*/

/*  Serial.println("wrist motor");
  
    for( wma=lowerlimit;wma<=upplimit;wma=wma+5)
  {
    Serial.print(">");
    Serial.print("turning servo to ");
    Serial.println(wma);  
    wrist.write(wma);
    delay(200);
  }
  for( wma=upplimit;wma>=lowerlimit;wma=wma-5)
  {,
    Serial.print(">");
    Serial.print("turning servo to ");
    Serial.println(wma);
    wrist.write(wma);  
    delay(200);
  }
   Serial.println("wrist motor");
  
    for( wma=lowerlimit;wma<=upplimit;wma=wma+5)
  {
    Serial.print(">");
    Serial.print("turning servo to ");
    Serial.println(wma);  
    wrist.write(wma);
    delay(200);
  }
  for( wma=upplimit;wma>=lowerlimit;wma=wma-5)
  {
    Serial.print(">");
    Serial.print("turning servo to ");
    Serial.println(wma);
    wrist.write(wma);  
    delay(200);
  }
  /*  Serial.println("shoulder motor");
  
    for( sma=0;sma<=100;sma=sma+10)
  {
    Serial.print(">");
    Serial.print("turning servo to ");
    Serial.println(sma);  
    myservo1.write(sma);
    delay(1000);
  }
  for( sma=100;sma>=0;sma=sma-10)
  {
    Serial.print(">");
    Serial.print("turning servo to ");
    Serial.println(sma);
    myservo1.write(sma);  
    delay(1000);
  }
      Serial.println("base motor");
  
    for( bma=0;bma<=100;bma=bma+10)
  {
    Serial.print(">");
    Serial.print("turning servo to ");
    Serial.println(bma);  
    myservo1.write(bma);
    delay(1000);
  }
  for( bma=100;bma>=0;bma=bma-10)
  {
    Serial.print(">");
    Serial.print("turning servo to ");
    Serial.println(bma);
    myservo1.write(bma);  
    delay(1000);
  }
        Serial.println("elbow motor");
  
    for( ema=0;ema<=100;ema=ema+10)
  {
    Serial.print(">");
    Serial.print("turning servo to ");
    Serial.println(ema);  
    myservo1.write(ema);
    delay(1000);
  }
  for( ema=100;ema>=0;ema=ema-10)
  {
    Serial.print(">");
    Serial.print("turning servo to ");
    Serial.println(ema);
    myservo1.write(ema);  
    delay(1000);
  }*/
}
