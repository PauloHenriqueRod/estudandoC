#include <stdio.h>
int main(){
    int vet[1000];
    int n, i=0, j;
    scanf("%d", &n);
    while(1){
        for (j=0; j<n; j++){
            vet[i]=j;
            i++;
        if (i==1000)
            break;
        }
        if (i==1000)
            break;
    }
    for (i=0; i<1000; i++)
        printf("N[%d] = %d\n", i, vet[i]);
    return 0;
}
