
//Servo motor çalışması  için gerekli kütüphane dosyasını ekledik.
#include<Servo.h>
 
Servo right_servo;
Servo left_servo;
const int openmask = 7; 
const int closemask = 8; 

int openstate = 1;
int closestate = 1;
void setup() {
  
right_servo.attach(5);
left_servo.attach(3);
pinMode(openmask, INPUT);
pinMode(closemask, INPUT);
pinMode(13, OUTPUT);
}
 
void loop() {
  openstate = digitalRead(openmask);
  closestate = digitalRead(closemask);

  if (openstate == LOW ) {
    right_servo.write(180);
    left_servo.write(0);
    digitalWrite(13,HIGH);
  } 
  if (openstate == HIGH){
    right_servo.write(40);
    left_servo.write(140);
    digitalWrite(13,LOW); 
  }
delay(100);
}
 
