const byte LED1 = 13;
const byte LED2 = 12;
const byte LED3 = 11;
const byte LED4 = 10;
int BOTAO1 = 5;
int BOTAO2 = 4;
int BOTAO3 = 3;
int BOTAO4 = 2;

void setup (){
    pinMode(LED1, OUTPUT);
    pinMode(LED2, OUTPUT);
    pinMode(LED3, OUTPUT);
    pinMode(LED4, OUTPUT);
    pinMode(BOTAO1, INPUT);
    pinMode(BOTAO2, INPUT);
    pinMode(BOTAO3, INPUT);
    pinMode(BOTAO4, INPUT);
}

void loop (){
    static bool acao_executada = 0;
    if (digitalRead(BOTAO1)==1){
        if(acao_executada == 0){
            digitalWrite(LED1, !digitalRead(LED1));
            acao_executada = 1;
        }
    }
    else{
        acao_executada = 0;
    }
    if (digitalRead(BOTAO2)==1){
        if(acao_executada == 0){
            digitalWrite(LED2, !digitalRead(LED2));
            acao_executada = 1;
        }
    }
    else{
        acao_executada = 0;
    }

    if (digitalRead(BOTAO3)==1){
        if(acao_executada == 0){
            digitalWrite(LED3, !digitalRead(LED3));
            acao_executada = 1;
        }
    }
    else{
        acao_executada = 0;
    }
    digitalRead(BOTAO4);
    if (digitalRead(BOTAO4)==1){
        if(acao_executada == 0){
            digitalWrite(LED4, !digitalRead(LED4));
            acao_executada = 1;
        }
    }
    else{
        acao_executada = 0;
    }
}