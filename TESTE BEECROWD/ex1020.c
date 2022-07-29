#include <stdio.h>

int main(){
    int n, anos, meses, dias;
    scanf("%d", &n);
    anos = n/365;
    n -= anos*365;
    meses = n/30;
    n -= meses*30;
    printf("%d ano(s)\n", anos);
    printf("%d mes(es)\n", meses);
    printf("%d dia(s)\n", n);
    return 0;
}
