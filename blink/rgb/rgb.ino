const int GREEN = A2;
const int RED = A3;
const int BLUE = A4;

void setup() {
  pinMode(RED, OUTPUT);
  pinMode(GREEN, OUTPUT);
  pinMode(BLUE, OUTPUT);

}

void loop() {
// digitalWrite(RED, HIGH);
// delay(1000);
// digitalWrite(RED, LOW);
//
// digitalWrite(GREEN, HIGH);
// delay(1000);
// digitalWrite(GREEN, LOW);
//
// digitalWrite(BLUE, HIGH);
// delay(1000);
// digitalWrite(BLUE, LOW);

  analogWrite(RED, 30);
  analogWrite(GREEN, 100);
  analogWrite(BLUE, 255);
}
