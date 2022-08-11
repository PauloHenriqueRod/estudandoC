#include <stdio.h>

int main(){
    float mat[12][12];
    float soma=0;
    int i, j, col, n=0;
    char sm;
    scanf("%d", &col);
    scanf(" %c", &sm);
    for (i=0; i<12; i++){
        for (j=0; j<12; j++)
            scanf("%f", &mat[i][j]);
    }
    for (i=0; i<12; i++){
        for (j=0; j<12; j++)
            if (j>i){
                soma += mat[i][j];
                n++;
            }
    }
    if (sm == 'S')
        printf("%f\n", soma);
    else
        printf("%f\n", soma/n);
    return 0;
}
