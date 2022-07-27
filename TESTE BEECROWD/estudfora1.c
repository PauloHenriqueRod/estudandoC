#include <stdio.h>

int main(){
    int i=0, x, mquat=0, totset=0;
    float nota, cont, maior=0, menor=10, tot=0, msete;
    do{
        do{
            printf("Nota %d: ", i+1);
            scanf("%f", &nota);
            if (nota<0 || nota>10)
                printf("NOTA INVALIDA!\n");
        }while(nota<0 || nota>10);
        i++;
        tot += nota;
        if (nota>=9)
            printf("NOTA EXCELENTE\n");
        if (nota<7)
            printf("ESTUDE MAIS\n");
        if (nota<4)
            mquat += 1;
        if (nota>=7){
            msete+=nota; totset++;}
        if (nota >= maior)
            maior = nota;
        if (nota <= menor)
            menor = nota;
        printf("DESEJA CONTINUAR [1=SIM, 2 = NAO]");
        scanf("%d", &x);
    }while(x!=2);
    printf("Notas menores que 4 = %d\n", mquat);
    printf("Maior = %.1f, Menor = %.1f\n", maior, menor);
    printf("Media = %.1f\n", tot/(i/1.0));
    printf("Media(>7) = %.1f\n", msete/(totset/1.0));
    return 0;
}
