int X1=A1, X2=A3, Y1=A0, Y2=A2;
int X, Y;
void setup() {
   Serial.begin(9600);
}

void loop() {
  pinMode(X1, OUTPUT);
  pinMode(X2, OUTPUT);
  pinMode(Y1, INPUT);
  pinMode(Y2, INPUT);   
  digitalWrite(X1, HIGH);
  digitalWrite(X2, LOW);
  digitalWrite(Y2, LOW);
  X= analogRead(Y1);
  Serial.print("X : ");
  Serial.print(X);
  Serial.print(" ");

  pinMode(Y1, OUTPUT);
  pinMode(Y2, OUTPUT);
  pinMode(X1, INPUT);
  pinMode(X2, INPUT);   
  digitalWrite(Y1, HIGH);
  digitalWrite(Y2, LOW);
  digitalWrite(X2, LOW);
  Y= analogRead(X1);
  Serial.print("Y : ");
  Serial.println(Y);
  delay(400);

}
