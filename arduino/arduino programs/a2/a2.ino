int i = 25;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600); // opens the serial port at 9600 bps

}

void loop() {
  // put your main code here, to run repeatedly:
Serial.print("Hello"); // prints string "hello"  
Serial.print("\t"); // prints a tab 
Serial.println('a'); // prints char 'a' in a new line 
Serial.println(i); // print as an ASCII-encoded decimal 
Serial.println(i, DEC); // print as an ASCII-encoded decimal 
Serial.println(i, HEX); // print as an ASCII-encoded hexadecimal 
Serial.println(i, OCT); // print as an ASCII-encoded octal 
Serial.println(i, BIN); // print as an ASCII-encoded binary

}
