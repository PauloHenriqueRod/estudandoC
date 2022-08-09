#include <stdio.h>

int main(){
    int e, j1, j2, r, a, soma;
    scanf("%d %d %d %d %d", &e,  &j1, &j2, &r, &a);
    soma = j1 + j2;
    if (r==0 && a==0){
        if (e==1){
            if ((soma%2)==0)
                printf("Jogador 1 ganha!\n");
            else
                printf("Jogador 2 ganha!\n");
        }
        else{
            if ((soma % 2)==0)
                printf("Jogador 2 ganha!\n");
            else
                printf("Jogador 1 ganha!\n");
}}
    if (r==1 && a==0)
        printf("Jogador 1 ganha!\n");
    if (r==1 && a==1)
        printf("Jogador 2 ganha!\n");
    if (r==0 && a==1)
        printf("Jogador 1 ganha!\n");
    return 0;
}
