#include <stdio.h>

int main(){
    float mat[12][12];
    float soma=0;
    int i, j, col;
    char sm;
    scanf("%d", &col);
    scanf(" %c", &sm);
    for (i=0; i<12; i++){
        for (j=0; j<12; j++)
            scanf("%f", &mat[i][j]);
    }
    for (i=0; i<12; i++){
        soma+=mat[i][col];
    }
    if (sm == 'S')
        printf("%f\n", soma);
    else
        printf("%f\n", soma/12);
    return 0;
}
