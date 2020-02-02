String c;
int a;
float b;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
Serial.println("please enter your name");
while(Serial.available()==0)
 {
  
 }
c=Serial.readString();
Serial.println("please enter your age?");
while(Serial.available()==0)
 {
  
 }
a=Serial.parseInt();
Serial.println("please enter your height?");
while(Serial.available()==0)
 {
  
 }
b=Serial.parseFloat();
Serial.print(c);
Serial.print("  ");
Serial.print(a);
Serial.print("  ");
Serial.print(b);
Serial.println("");
}
