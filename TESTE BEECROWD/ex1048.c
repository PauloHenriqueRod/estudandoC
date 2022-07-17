#include <stdio.h>

int main(){
    float sal, novosal, reajusteganho;
    int reajusteperc, reajuste;
    scanf("%f", &sal);
    if (sal>0 && sal<=400){
        reajuste = 15;
        novosal = (sal) + sal*(reajuste/100.0);
        reajusteganho = novosal - sal;
    }
    if (sal>400 && sal<=800){
        reajuste = 12;
        novosal = (sal) + sal*(reajuste/100.0);
    }
    if (sal>800 && sal<=1200){
        reajuste = 10;
        novosal = (sal) + sal*(reajuste/100.0);
    }
    if (sal>1200 && sal<=2000){
        reajuste = 7;
        novosal = (sal) + sal*(reajuste/100.0);
    }
    if (sal>2000){
        reajuste = 4;
        novosal = (sal) + sal*(reajuste/100.0);
    }
    reajusteganho = novosal - sal;
    printf("Novo salario: %.2f\n", novosal);
    printf("Reajuste ganho: %.2f\n", reajusteganho);
    printf("Em percentual: %d %%\n", reajuste);
}
