#include <stdio.h>

int main(){
    float media;
    printf("MEDIA: ");
    scanf("%f", &media);
    if (media >= 7){
        printf("APROVADO\n");
    }
    else if (media < 4){
        printf("REPROVADO\n");
    }
    else{
        printf("EXAME FINAL\n");
    }
}
