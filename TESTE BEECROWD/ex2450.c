#include <stdio.h>

int main(){
    long int lin, col, i, j,k, l, n = 0;
    scanf("%d %d", &lin, &col);
    float mat[lin][col];
    for (i=0; i<lin; i++){
        for (j=0; j<col; j++)
            scanf("%f", &mat[i][j]);
    }
    for (i=0; i<lin; i++){
        for (j=0; j<col; j++){
            if (mat[i][j]!=0)
                break;
            if (mat[i][j]==0){
                for(k=i+1; k<lin; k++){
                    for(l=j+1; l>0; l--){
                        if (mat[k][l]!=0){
                            printf("N\n");
                            n++;
                            break;
                        }
                        if (n!=0)
                            break;
                    }
                    if (n!=0)
                        break;
                }
                if (n!=0)
                    break;
            }
            if (n!=0)
                break;
        }
        if (n!=0)
            break;
    }
    if (n==0)
     printf("S\n");
     return 0;
}
