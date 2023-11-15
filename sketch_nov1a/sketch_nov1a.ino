//declaration
int led=LED_BUILTIN;
void setup() {
  // put your setup code here, to run once:
pinMode(led,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(led,HIGH);
Serial.println("On");
delay(100);
digitalWrite(led,LOW);
Serial.println("Off");
delay(100);
}
