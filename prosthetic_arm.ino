#include <Servo.h>

Servo myservo1;
Servo myservo2;
Servo myservo3;
Servo myservo4;

int emgPin = A0;   
int emgValue = 0;  

int pos = 0;    

void setup() {
  myservo1.attach(9);
  myservo2.attach(8);
  myservo3.attach(10);
  myservo4.attach(11);

  Serial.begin(9600);  
}

void loop() {
  emgValue = analogRead(emgPin); 
  
  
  pos = map(emgValue, 0, 1023, 0, 180);

  
  myservo1.write(pos);
  myservo2.write(pos);
  myservo3.write(pos);
  myservo4.write(pos);

  Serial.print("EMG Value: ");
  Serial.println(emgValue);   

  delay(100); 
}
