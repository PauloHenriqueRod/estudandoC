#include <stdio.h>

int main(){
    int vet[10];
    int x;
    int i;
    for (i=0; i<10; i++){
        scanf("%d", &x);
        if (x<=0)
            x=1;
        vet[i]=x;
    }
    for (i=0; i<10; i++)
        printf("X[%d] = %d\n", i, vet[i]);
    return 0;
}
