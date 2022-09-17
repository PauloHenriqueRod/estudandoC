#include <stdio.h>

int LeNaoNegativo(){
    int num;
    while(1){
    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &num);
    if (num>=0)
        return num;
    }
}

int SomaDivisores(int x){
    int soma=0;
    for (int i=1; i<=(x/2); i++){
        if (x%i==0)
            soma += i;
    }
    return soma;
}

int SaoAmigos(int n, int m){
    if ((SomaDivisores(n)==m)&&(SomaDivisores(m)==n))
        return 1;
    else
        return 0;
}


int main(){
    int x, y, t;
    x = LeNaoNegativo(x);
    y = LeNaoNegativo(y);
    t = SaoAmigos(x, y);
    if (t==1)
        printf("Sao amigos\n");
    else
        printf("Nao sao amigos\n");
    return 0;
}
