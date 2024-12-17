
void setup() {

Serial.begin(9600);
pinMode(7,INPUT);
pinMode(8,INPUT);
pinMode(9,INPUT);
}

void loop() {
int btn1=DigitalRead(7);
int btn2=DigitalRead(8);
int btn3=DigitalRead(9);



int humidity=analogRead(A0);
int percent=map(humidity,1023,400,0,100);
Serial.print("percent:");
Serial.println(percent);
delay(1000);
}