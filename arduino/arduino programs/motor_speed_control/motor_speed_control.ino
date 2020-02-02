#define enA 9
#define in1 11
#define in2 12

void setup() 
{
  pinMode(enA, OUTPUT);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
 
  digitalWrite(in1, 0);
  digitalWrite(in2, 1);
}
void loop() 
{
 // potValue = analogRead(A0);
 // pwmOutput = map(potValue, 0, 1023, 0 , 255); 
 // analogWrite(enA, 255); 
}
