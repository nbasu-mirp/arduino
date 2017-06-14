#include<Servo.h>

int yServoPin =2;
int xServoPin =3;

Servo ServoX, ServoY;
int mn=80, mx= 110;

void setup() {
 ServoX.attach(xServoPin);
 ServoY.attach(yServoPin);
}

void loop() {
  for(int i=mn ; i<mx ; ++i){
    ServoX.write(i);
    ServoY.write(i);
    delay(40);
  }
  for(int i=mx ; i>mn ; --i){
    ServoX.write(i);
    ServoY.write(i);
    delay(40);
  }
}
