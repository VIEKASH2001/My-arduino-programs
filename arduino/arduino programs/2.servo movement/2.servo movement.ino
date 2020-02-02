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
  
for(int pos=0; pos<=170;pos=pos+1)
{
  s.write(pos);
  delay(15);
}

for(int pos=170; pos>=0;pos=pos-1)
{
  s.write(pos);
  delay(15);
}

}
