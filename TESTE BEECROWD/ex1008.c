#include <stdio.h>

int main(){
    int n, ht;
    float sh, salario;
    scanf("%d", &n);
    scanf("%d", &ht);
    scanf("%f", &sh);
    salario = ht*sh;
    printf("NUMBER = %d\n", n);
    printf("SALARY = %.2f\n", salario);
}
