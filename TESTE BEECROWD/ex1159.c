#include <stdio.h>

int main(){
    int x, soma, i;
    while(1){
        scanf("%d", &x);
        soma = 0;
        if (x==0)
            break;
        if ((x%2)==0)
            for(i=x;i<=x+8; i+=2){
                soma += i;
        }
        else
        for(i=x+1; i<=x+9; i+=2){
            soma += i;
        }
        printf("%d\n", soma);
    }
    return 0;
}
