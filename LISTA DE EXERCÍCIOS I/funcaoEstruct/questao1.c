#include <stdio.h>
#include <math.h>
#define MAX 10

int ehraiz(int n, float a[], float xr){
    int i;
    float soma=0;
    for (i=0; i<n; i++){
        soma = soma + a[i] * pow(xr, i);
    }
    return (soma==0);
}

void lerCoeficientes(int n, float coef[MAX]){
    int i;
    for (i=0; i<n-1; i++){
        printf("Coeficiente a%d: ", i);
        scanf("%f", &coef[i]);
    }
    printf("Coeficiente a%d", n-1);
    scanf("%f", coef[n-1]);
    while(coef[n-1]==0){
        printf("Coeficiente in")
    }
}

int main(){
    float coef[MAX];
    int grau;
    int raiz;
    do{
        printf("Digite o grau do polinomio [1 a %d]: ", MAX - 1)
    }while(grau<0 || grau>MAX - 1);
    lerCoeficientes(grau+1, coef);
    printf("Digite a raiz: ");
    scanf("%d", &raiz);
    if (ehraiz(grau+1, coef, raiz))
        printf("RAIZ CORRETA\n");
    else
        printf("Nao eh raiz\n");
    return 0;
}


