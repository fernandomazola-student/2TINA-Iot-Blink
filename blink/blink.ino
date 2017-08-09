const int LED = 8;

void setup() {
//Vamos setar o tipo de porta, se ele vai entrar ou vai sair dados. 
//Para fazer o led piscar, precisamos fazer a saida

//Avisamos ao arduino que a porta do tipo 8 será de saida, ou seja, estamos enviando energia.
pinMode(LED, OUTPUT);
}

void loop() {
  // Quando ligamos um circuito , ele está no loop infinito. Porque ele vai ficar fazendo a logica dele, ou seja, ta ligada, ou desligado? Vamos colocar a logica do que o arduino deve fazer
  digitalWrite(LED, LOW);
  delay(1000);
  digitalWrite(LED, HIGH);
  delay(1000);
}
