#include <avr/pgmspace.h>

#include <Stepper.h>

Stepper motor(1024,8,10,9,11);


const  short R=3;
const  short G=5;
const  short B=6;


void setup() {
motor.setSpeed(30);

Serial.begin(9600);
pinMode(R,OUTPUT);
pinMode(G,OUTPUT);
pinMode(B,OUTPUT);

}

void loop() {
//motor.step(1024);



int humidity=analogRead(A5);
//int percent=27; //테스트용
float percent=map(humidity,1023,200,0,100);
float R_lux=map(humidity,1023,200,100,255);
float B_lux=map(humidity,1023,200,255,0);
Serial.print("humid:");
Serial.println(humidity);
Serial.print("percent:");
Serial.println(percent);
Serial.print("R_lux:");
Serial.print(R_lux);
Serial.print("B_lux:");
Serial.print(B_lux);
delay(10);
if(percent<=30 and percent>=20){
  analogWrite(G,0);
  analogWrite(R,255);
  analogWrite(B,255);

}else{
analogWrite(G,230);
analogWrite(R,R_lux);
analogWrite(B,B_lux);
 if(percent<20){
  motor.step(-1024);
  delay(100);
  motor.step(1024);
  delay(500);
  }
}



}