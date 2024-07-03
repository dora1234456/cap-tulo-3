#include
const byte LED = 13;
const byte botao = 5;

void setup () {
    pinMode(LED, OUTPUT);
    
}

void loop() {
    static byte estado = 0
    switch (estado){
            case 0:
            if(digitalRead(botao)){
                digitalWrite(13, !digitalRead(13));
                estado = 1;
            }
    }

    break;

    case 1:
    if(!digitalRead(5)){
        estado = 0;
    }
    break;
    }
    