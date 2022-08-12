#include <stdio.h>

int main(){
    double mat[12][12];
    int i, j, num=0;
    double soma = 0;
    char sm;
    scanf(" %c", &sm);
    for (i=0; i<12; i++){
        for (j=0; j<12; j++)
            scanf("%lf", &mat[i][j]);
    }
    for (i=1; i<12; i++){
        for (j=11; j>11-i; j--){
            soma+=mat[i][j];
            num++;
    }
    }
    if (sm=='S')
        printf("%.1lf\n", soma);
    else
        printf("%.1lf\n", soma/num);
    return 0;
}
