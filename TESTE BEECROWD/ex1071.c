#include <stdio.h>

int main(){
    int x, y, soma=0, i, soma1=0;
    scanf("%d", &x);
    scanf("%d", &y);
    if (x%2!=0)
            soma1 += x;
    if (y%2!=0)
        soma1 += y;
    if (x>y){
        i = y;
        for(i; i<=x; i++){
            if (i%2!=0)
                soma+=i;
        }
        printf("%d\n", soma-soma1);
    }
    if (y>x){
        i = x;
        for(i; i<=y; i++){
            if (i%2!=0)
                soma+=i;
        }
         printf("%d\n", soma-soma1);
    }
    if (y==x)
        printf("%d\n", soma);
    return 0;
}
