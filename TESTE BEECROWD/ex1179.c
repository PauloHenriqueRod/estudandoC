#include <stdio.h>

int main(){
    int par[5];
    int impar[5];
    int j=1, k, a, p=0, i=0;
    while(1){
        scanf("%d", &a);
        if (a%2==0){
            par[p]=a;
            p++;
            j++;
        }
        if (a%2!=0){
            impar[i]=a;
            i++;
            j++;
        }
        if (i==5){
            for (k=0; k<i; k++){
                printf("impar[%d] = %d\n", k, impar[k]);
            }
            i=0;
        }
        if (p==5){
            for (k=0; k<p; k++){
                printf("par[%d] = %d\n", k, par[k]);
            }
            p=0;
        }
        if (j==16){
            for(k=0; k<i; k++)
                printf("impar[%d] = %d\n", k, impar[k]);
            for(k=0; k<p; k++)
                printf("par[%d] = %d\n", k, par[k]);
            break;
        }
    }
    return 0;
}
