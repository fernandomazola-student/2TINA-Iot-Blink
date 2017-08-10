const int LEDVERMELHO = 10;
const int LEDVERDE = 11;
const int LEDAMARELO = 12;

void setup() {
  // put your setup code here, to run once:
  pinMode(LEDVERMELHO, OUTPUT);
  pinMode(LEDVERDE, OUTPUT);
  pinMode(LEDAMARELO, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
    digitalWrite(LEDVERMELHO, HIGH);
//    delay(1000);
//    digitalWrite(LEDVERMELHO, LOW);

    digitalWrite(LEDVERDE, HIGH);
//    delay(1000);
    digitalWrite(LEDVERDE, LOW);

    digitalWrite(LEDAMARELO, HIGH);
//    delay(1000);
//    digitalWrite(LEDAMARELO, LOW);
  }

