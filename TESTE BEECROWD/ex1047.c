#include <stdio.h>

int main(){
    int hinicial, minicial, hfinal, mfinal, horas, minutos;
    scanf("%d %d %d %d", &hinicial, &minicial, &hfinal, &mfinal);
    if (hfinal>hinicial){
        if (mfinal >= minicial){
            horas = hfinal - hinicial;
            minutos = mfinal - minicial;
        }else{
            horas = (hfinal - 1) - hinicial;
            minutos = (mfinal + 60) - minicial;
        }
    }
    if (hfinal<hinicial){
        if (mfinal >= minicial){
            horas = 24 - hinicial + hfinal;
            minutos = mfinal - minicial;
        }else{
            horas = 23 - hinicial + hfinal;
            minutos = (mfinal + 60) - minicial;
        }
    }
    if (hfinal==hinicial){
        if (mfinal == minicial){
            horas = 24;
            minutos = 0;
        }if (mfinal < minicial){
            horas = 23;
            minutos = (mfinal + 60) - minicial;
        }
        if (mfinal > minicial){
            horas = 0;
            minutos = mfinal - minicial;
        }
        }
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", horas, minutos);
    }
