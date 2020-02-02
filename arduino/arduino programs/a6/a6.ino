int c;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  c=Serial.parseInt();
  Serial.println(c);
  switch(c)
  {
    case 1:digitalWrite(9,HIGH);
         delay(1000);
         digitalWrite(9,LOW);
         delay(500);
         break;
  case 2:digitalWrite(10,HIGH);
         delay(1000);
         digitalWrite(10,LOW);
         delay(500);
         break;
  }      
} 
