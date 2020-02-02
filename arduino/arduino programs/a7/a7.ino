int r;
void setup() {
  // put your setup code here, to run once:
 Serial.begin(9600);
 pinMode(A0,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  r=analogRead(A0);
  Serial.println(r);
  delay(250);
  {
    
  }
  
}
