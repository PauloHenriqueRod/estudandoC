#include <stdio.h>

int main(){
    int x;
    float nota1, nota2, media;
    x = 1;
    do{
        scanf("%f", &nota1);
        while(nota1<0 || nota1>10){
            printf("nota invalida\n");
            scanf("%f", &nota1);
        }
        scanf("%f", &nota2);
        while(nota2<0 || nota2>10){
            printf("nota invalida\n");
            scanf("%f", &nota2);
        }
        media = (nota1+nota2)/2.0;
        printf("media = %.2f\n", media);
        do{
            printf("novo calculo (1-sim 2-nao)\n");
            scanf("%d", &x);
        }while(x!=1 && x!=2);
    }while(x!=2);
    return 0;
}
