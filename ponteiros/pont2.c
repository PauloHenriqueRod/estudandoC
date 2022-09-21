#include <stdio.h>

void troca(int *a, int *b){
    int aux = *a;
    *a = *b;
    *b = aux;
    printf("dentro a = %d, b = %d\n", *a, *b);
}

int main(){
    int a = 1;
    int b = 2;
    troca(&a, &b);
    printf("a = %d,  b = %d\n", a, b);
}
