#include <stdio.h>

int main(){;
        float media, N1, N2, N3, N4;
        scanf("%f%f%f%f", &N1, &N2, &N3, &N4);
        media = (N1*2+N2*3+N3*4+N4)/10.0;
        printf("Media: %.1f\n", media);
        if (media>=7)
            printf("Aluno aprovado.\n");
        else{
            if (media<5)
                printf("Aluno reprovado.\n");
            else{
                float nota_exame;
                printf("Aluno em exame.\n");
                scanf("%f", &nota_exame);
                media = (media+nota_exame)/2.0;
                printf("Nota do exame: %.1f\n", nota_exame);
                if (media > 5)
                    printf("Aluno aprovado.\n");
                else
                    printf("Aluno reprovado.\n");
                printf("Media final: %.1f\n", media);
            }
        }
}
