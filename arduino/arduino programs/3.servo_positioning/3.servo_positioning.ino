#include<Servo.h>
Servo s;
int c;
unsigned int angle;
void setup() {
  s.attach(8);
  //s.write(0);
  //delay(2000);
  Serial.begin(9600);
}
void loop() {

  //in each round it comes back to zero because the serial monitor itself will be giving that value
  //always initial angle by default for servo is 90 degree
  c=s.read();
  Serial.println(c);
  Serial.print("Enter angle: ");
  while(Serial.available()==0){
  } /* Exits loop only if a Serial data is received */
  delay(100);
  angle=Serial.parseInt(); 
  Serial.println(angle); 
  angle=map(angle,0,180,0,151);  //this helps when value entered is more than 180 or less than 0
  s.write(angle);
}
