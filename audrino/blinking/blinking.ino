int RXLED =17;

void setup() {
  // put your setup code here, to run once:
  pinMode(RXLED, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(RXLED, HIGH);
    delay(1000);
  digitalWrite(RXLED, LOW);
  delay(0);
  TXLED0;
  delay(100);
  TXLED1;
  delay(100);
 }
