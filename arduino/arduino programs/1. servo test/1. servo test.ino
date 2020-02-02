#include<Servo.h>
Servo s;

void setup() {
  // put your setup code here, to run once:
 Serial.begin(9600);
 s.attach(8);
 s.write(0);
 delay(2000);
}

void loop() {
  // put your main code here, to run repeatedly:
 s.write(90);
 delay(500);
 s.write(0);
 delay(500);
}
