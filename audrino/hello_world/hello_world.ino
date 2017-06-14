int speed=9600;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(speed);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("hello world");
  delay(1000);
}
