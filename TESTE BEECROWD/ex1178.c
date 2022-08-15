#include <stdio.h>

int main(){
    double vet[100];
    int i;
    double n;
    scanf("%lf", &n);
    for (i=0; i<=100; i++){
        vet[i]=n;
        n=n/2;
    }
    for (i=0; i<100;i++){
        printf("N[%d] = %.4lf\n", i, vet[i]);
    }
    return 0;
}
