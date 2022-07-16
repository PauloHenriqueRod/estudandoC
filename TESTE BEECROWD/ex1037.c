#include <stdio.h>

int main(){
    float n;
    scanf("%f", &n);
    if (n >= 0 && n<=100){
        if (n <= 25)
            printf("Intervalo [0,25]");
        if (n > 25 && n <= 50)
            printf("Intervalo (25,50]");
        if (n > 50 && n <= 75)
            printf("Intervalo (50,75]");
        if (n > 75 && n <= 100)
            printf("Intervalo (75,100]");
    }else
    printf("Fora de intervalo");
    return 0;
}
