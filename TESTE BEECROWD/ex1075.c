#include <stdio.h>

int main(){
    int maior, pos=1, i ,n;
    for (i=1;i<=10;i++){
        scanf("%d", &n);
        if (i==1){
            maior = n;
            pos = 1;
        }
        if (n>maior){
            maior = n;
            pos = i;
    }
    }
    printf("%d\n", maior);
    printf("%d\n", pos);
    return 0;
}
