#include<Wire.h>
int slaveId=5;


void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
Wire.begin(slaveId);
Wire.onReceive(blinkl);
}

void loop() {
  // put your main code here, to run repeatedly:

}
void blinkl(int howMany){
  while(Wire.available()>0){
    char c = Wire.read();

    Serial.print("Value is");
    Serial.println(c);
  }
  
}


