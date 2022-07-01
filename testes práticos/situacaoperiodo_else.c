#include <stdio.h>

int main(){
    float nota1, nota2, nota3, media;
    printf("NOTA 1: ");
    scanf("%f", &nota1);
    printf("NOTA 2: ");
    scanf("%f", &nota2);
    printf("NOTA 3: ");
    scanf("%f", &nota3);
    media = (nota1+nota2+nota3)/3;
    printf("%f\n", media);
    if (media >= 7){
        printf("APROVADO\n");
    }else{
        if (media >= 4){
            printf("EXAME FINAL\n");
        }else{
            printf("REPROVADO");
        }
    }
}
