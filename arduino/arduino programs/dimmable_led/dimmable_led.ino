int r,w,i;
void setup() {
  // put your setup code here, to run once:
 Serial.begin(9600);
 pinMode(A0,INPUT);
 pinMode(11,OUTPUT);
 analogWrite(11,0);
 Serial.println("Pvoltage : Ivoltage");//P-potentiometre, I-input
}

void loop() {
  // put your main code here, to run repeatedly:
 /* //light intensity oscillation code
  for(i=0; i<=255; i=i+1)
  {
    analogWrite(11,i);
    delay(25);
  }
  for(i=255; i>=0; i=i-1)
  {
    analogWrite(11,i);
    delay(25);
  }*/
  r=analogRead(A0);
  Serial.print(r);
  Serial.print("      : ");
  w=(255.0/1023)*r;
  Serial.println(w);
  analogWrite(11,w);
  delay(1000);
  
}
