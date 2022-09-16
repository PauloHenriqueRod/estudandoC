#include <stdio.h>

int main(){
    float comp, larg, pot;
    printf("COMPRIMENTO: ");
    scanf("%f", &comp);
    printf("LARGURA: ");
    scanf("%f", &larg);
    pot = larg*comp*18;
    printf("AREA = %f\n", larg*comp);
    printf("POTENCIA: %f\n", pot);
    return 0;
}
