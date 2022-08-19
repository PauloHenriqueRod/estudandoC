#include <stdio.h>
#include <string.h>


int main(){
    int lin, col, i, j,k, l, n = 0;
    scanf("%d %d", &lin, &col);
    float mat[lin][col];
    for (i=0; i<lin; i++){
        for (j=0; j<col; j++)
            scanf("%d", &mat[i][j]);
    }
    for (i=0; i<(lin); i++){
        if (n==1)
            break;
        for (j=0; j<col; j++){
            if (mat[i][j]==0){
                if (i==lin){
                    break;
                }
                if(j==col){
                    for(k=i;k<lin;k++){
                        for(l=j; l>=0;l--){
                            if (mat[k][l]!=0){
                                printf("N\n");
                                n++;
                                break;
                            }
                        }
                    }
                }
                else{
                    for(k=i;k<lin;k++){
                        for(l=j+1; l>=0;l--){
                            if (mat[k][l]!=0){
                                printf("N\n");
                                n++;
                                break;
                            }
                        }
                    }
                }
            }
    }
    }
    if (n==0)
        printf("S\n");
}
