#define qtd_led 5
#define botao 4
#define ledv 18

int pinosleds[qtd_led] = {15, 2, 0, 16, 5};

void setup() {
  for (int i = 0; i < qtd_led; i++){
    pinMode(pinosleds[i], OUTPUT);
  }
  pinMode(ledv, OUTPUT);
  pinMode(botao, INPUT_PULLUP);
}

void loop() {
  while (digitalRead(botao) == LOW){
    digitalWrite(ledv, HIGH);
  }
  for (int i = 0; i < qtd_led; i++){
    digitalWrite(pinosleds[i], HIGH);
    delay(500);
  for (int i = 0; i < qtd_led; i++){
    digitalWrite(pinosleds[i], LOW);
  }}
}
