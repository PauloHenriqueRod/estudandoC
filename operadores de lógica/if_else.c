#include <stdio.h>

/*
    operador E = &&
    operador OU = ||

    preced�ncia: Primeiro os E e depois OU
    par�nteses muda a preced�ncia
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
