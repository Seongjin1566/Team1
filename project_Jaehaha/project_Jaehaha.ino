
int R=3;
void setup() {
Serial.begin(9600);


}

void loop() {

int humidity=analogRead(A0);
int percent=map(humidity,1023,400,0,100);
int lux=map(humidity,1023,400,0,255);
Serial.print("humid:");
Serial.println(humidity);
Serial.print("percent:");
Serial.println(percent);
Serial.print("lux:");
Serial.println(lux);
Serial.print(255);
delay(1000);


}