#include <stdio.h>

int main(){
    float comissao, conta;
    printf("CONTA: ");
    scanf("%f", &conta);
    comissao = conta*0.1;
    printf("COMISSAO = %f", comissao);
    return 0;
}
