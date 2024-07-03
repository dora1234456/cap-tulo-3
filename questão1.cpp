#include
const byte LED1 = 13;
const int botao = 5;
static int botaoAnterior;
int botaoAtual = 0;

void setup () {
    pinMode (LED1, OUTPUT);
    pinMode (botao, INPUT);
}

void loop() {
    botaoAtual = digitalRead(botao);
    botaoAnterior = !digitalRead(botao)
    bool bt = digitalRead(botao);
    if (botaoAtual==HIGH && botaoAnterior==LOW){
        digitalWrite(LED1, !digitalRead(LED1))
    }
}