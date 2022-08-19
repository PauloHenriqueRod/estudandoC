#include <stdio.h>

int main(){
    int lin, col, i, j,k, l, n = 0, a, x, y;
    scanf("%d %d", &lin, &col);
    int matriz[lin][col];
    for (i=0; i<lin; i++)
    for(j = 0; j<col; j++){
        scanf("%d", &matriz[i][j]);
    }
    for(i=0;i<lin;i++){
    for(j=0; j<col;j++){
        a = -1;
        if (matriz[i][j]!=0)
            break;
        a++;
    }
    if (a!=-1){
        if (a==(col-1)){
            for(x=a;x>=0;x--){
                for (y=i;y<lin;y++){
                    if (matriz[y][x]!=0){
                        printf("N\n");
                        n++;
                        break;
                    }
                }
            }
        }
        else{
            for(x=(a+1);x>=0;x--){
                for (y=i; y<lin;y++){
                    if (matriz[y][x]!=0){
                        printf("N\n");
                        n++;
                        break;
                    }
                }
            }
        }
    }
    }
    return 0;
}

