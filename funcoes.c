#include <stdio.h>
/*
void imprime(){
    printf("PAULO HENRIQUE\n");
}

int main(){
    imprime();
    return 0;
}
*/

int SomaInt(int a, int b){
    int s = a+b;
    return s;
}

float SomaFloat(float a, float b){
    float s = a + b;
    return s;
}
int Menor(int a, int b){
    if (a<=b)
        return a;
    else
        return b;
}

int main(){
    int inteiro = SomaInt(2, 6);
    float flutuante = SomaFloat(5.4, 2.3);
    int menor = Menor(3, 4);
    printf("Soma inteiros = %d\n", inteiro);
    printf("Soma flutuantes = %.2f\n", flutuante);
    printf("Menor numero = %d\n", menor);
    return 0;
}
