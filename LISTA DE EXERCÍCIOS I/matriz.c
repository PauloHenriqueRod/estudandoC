#include <stdio.h>
#define arm 3
#define prod 4

int main(){
    int mat[arm][prod];
    int i, j, soma;
    float cust[prod], somaf;
    for (i=0; i<arm; i++){
        printf("ARMAZEM %d: \n", i+1);
        for (j=0; j<prod; j++){
            printf("Produto %d: ", j+1);
            scanf("%d", &mat[i][j]);
        }
    }printf("Digite o custo de cada produto:\n");
    for(i=0; i<prod;i++){
        printf("Produto %d: R$ ", i+1);
        scanf("%f", &cust[i]);
    }printf("ESTOQUE:\n");
    for (i=0; i<prod; i++){
        printf("PRODUTO %d:\n", i+1);
        for(j=0; j<arm; j++){
            printf("Armazem %d: %d\n", j+1, mat[j][i]);
        }
    }printf("Quantidade total de produtos por armazém:\n");
    for(i=0; i<arm; i++){
        for(j=0, soma=0; j<prod;j++){
            soma+=mat[i][j];
        }printf("ARMAZEM %d: %d\n", i+1, soma);
    }printf("Quantidade total de produtos por tipo:\n");
    for(i=0; i<prod; i++){
        for(j=0, soma=0; j<arm;j++){
            soma+=mat[j][i];
        }printf("produto %d: %d\n", i+1, soma);
    }printf("Custo total por armazem:\n");
    for(i=0;i<arm;i++){
        for(j=0, somaf=0;j<prod;j++){
            somaf+=cust[j]*mat[i][j];
        }
        printf("ARMAZEM %d: %.2f\n", i+1, somaf);
    }printf("Custo total por produto:\n");
    for(i=0;i<prod;i++){
        for(j=0, somaf=0;j<arm;j++){
            somaf+=cust[i]*mat[j][i];
        }
        printf("PRODUTO %d: %.2f\n", i+1, somaf);
    }
    return 0;
}
