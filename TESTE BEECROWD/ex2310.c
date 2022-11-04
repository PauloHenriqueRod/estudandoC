#include <stdio.h>

int main(){
    int n, s=0, b=0, a=0, s1=0, b1=0, a1=0;
    int saque, bloqueio, ataque;
    char nome[100];
    scanf("%d", &n);
    for (int i=0; i<n; i++){
        scanf("%s", &nome);
        scanf("%d %d %d", &saque, &bloqueio, &ataque);
        s += saque; b+=bloqueio; a+=ataque;
        scanf("%d %d %d", &saque, &bloqueio, &ataque);
        s1 += saque; b1+=bloqueio; a1+=ataque;
    }
    printf("Pontos de Saque: %.2f %%.\n", (1.0*s1*100)/(1.0*s));
    printf("Pontos de Bloqueio: %.2f %%.\n", (1.0*b1*100)/(1.0*b));
    printf("Pontos de Ataque: %.2f %%.\n", (1.0*a1*100)/(1.0*a));
}
