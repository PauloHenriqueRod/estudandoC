#include <stdio.h>

/*
    operador E = &&
    operador OU = ||

    precedÍncia: Primeiro os E e depois OU
    parÍnteses muda a precedÍncia
*/
int main(){
    if (4%2==0 && 4>0){
        printf("4 e par e positivo\n");
    }
    if (5%2==0 || 5>0){
        printf("5 e par ou positivo\n");
    }
    return 0;
}
