float previousPosition = 0.0, currentPosition;
float angleError = 0.04;
float dt= 1;
float integral=0;

void solution (){
   float Kp=.0003, Kd=0.01, Ki=0.0000005;
   currentPosition = desiredX-ballX;
   float derivative=(currentPosition-previousPosition)/dt;
   integral= integral + currentPosition;
   float angelvalue=Kp*currentPosition + Kd*derivative+ Ki*integral;
   gotoAngle(angelvalue);
   //println(angelvalue);
   previousPosition= currentPosition;
}