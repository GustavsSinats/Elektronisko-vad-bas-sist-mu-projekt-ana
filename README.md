# Elektronisko-vad-bas-sist-mu-projekt-ana
Elektronisko vadības sistēmu projektēšana
void setup() {
  // put your setup code here, to run once:
//Serial.begin(115200);
pinMode(25, OUTPUT);
pinMode(26, OUTPUT);
pinMode(27, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(25, HIGH);
digitalWrite(26, LOW);
digitalWrite(27, LOW);
delay(5000);

digitalWrite(26, HIGH);
delay(2000);

digitalWrite(25, LOW);
digitalWrite(26, LOW);
digitalWrite(27, HIGH);
delay(5000);

digitalWrite(26, HIGH);
digitalWrite(27, LOW);
delay(2000);

}
