#include <stdio.h>

int main(){
    int A, B, tempo;
    scanf("%d%d", &A, &B);
    if (A>B){
        tempo = 24-A+B;
    }
    if (A<B){
        tempo = B-A;
    }
    if (A==B){
        tempo = 24;
    }
    printf("O JOGO DUROU %d HORA(S)\n", tempo);
}
