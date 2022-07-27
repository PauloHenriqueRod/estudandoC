#include <stdio.h>

int main(){
    int a, maior;
    maior = 0;
    do{
        scanf("%d", &a);
        if (a>maior)
            maior = a;
    }while (a!= 0);
    printf("%d\n", maior);
    return 0;
}
