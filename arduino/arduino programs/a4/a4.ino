#define in1 4 //Connect the in1 to pin 4 of arduino nano 
#define in2 5 // Connect the in2 to pin 5 of arduino nano 
#define in3 7 // Connect the in3 to pin 7 of arduino nano 
#define in4 8 // Connect the in4 to pin 8 of arduino nano 
int c; 
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600); 
pinMode(in1,OUTPUT); 
pinMode(in2,OUTPUT); 
pinMode(in3,OUTPUT); 
pinMode(in4,OUTPUT);
}

void loop() {
// put your main code here, to run repeatedly:
c=Serial.parseInt();     //Reads user input (an integer) from the serial stream 
Serial.println(c); //Prints the read user input on the serial monitor 
 switch(c)
 {
  case 1: digitalWrite(in1,HIGH);   //FORWARD 
          digitalWrite(in2,LOW); 
          digitalWrite(in3,HIGH); 
          digitalWrite(in4,LOW); 
          break; 
  case 2: digitalWrite(in1,HIGH); //LEFT 
          digitalWrite(in2,LOW); 
          digitalWrite(in3,LOW); 
          digitalWrite(in4,LOW); 
          break;    
  case 3: digitalWrite(in1,LOW); //RIGHT 
          digitalWrite(in2,LOW);
          digitalWrite(in3,HIGH); 
          digitalWrite(in4,LOW); 
          break;
  case 4: digitalWrite(in1,LOW); //BACK 
          digitalWrite(in2,HIGH);  
          digitalWrite(in3,LOW);
          digitalWrite(in4,HIGH); 
          break; 
  case 5: digitalWrite(in1,LOW); //STOP 
          digitalWrite(in2,LOW); 
          digitalWrite(in3,LOW); 
          digitalWrite(in4,LOW);
          break;    
 }
}
