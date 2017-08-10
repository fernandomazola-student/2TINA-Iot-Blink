//ANALOGICA VALORES INTERMEDIARIOS 0 ATÉ 5
const int LDR = A0;
void setup() {
  pinMode(LDR, INPUT);
  Serial.begin(9600); //Inicializando comunicacao serial
}

void loop() {
//  Lendo a voltagem da porta analogica 0
  int valor = analogRead(LDR);
  Serial.println(valor);
}
