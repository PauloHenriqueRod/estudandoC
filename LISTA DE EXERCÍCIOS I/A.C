#include <stdio.h>
#include <math.h>

int main(){
    float raioesfera, alturacone, raiocone, alturacilindro, raiocilindro, pi;
    pi = 3.14;
    printf("RAIO ESFERA:\n");
    scanf("%f", &raioesfera);
    printf("VOLUME ESFERA = %f\n", (4*pi*pow(raioesfera, 3)/3));
    printf("ALTURA CONE: \n");
    scanf("%f", &alturacone);
    printf("RAIO BASE CONE\n");
    scanf("%f", &raiocone);
    printf("VOLUME CONE = %f\n", pi*pow(raiocone, 2)*alturacone/3);
    printf("ALTURA CILINDRO: \n");
    scanf("%f", &alturacilindro);
    printf("RAIO DO CILINDRO: \n");
    scanf("%f", &raiocilindro);
    printf("VOLUNE DO CILINDRO: %f\n", pi*raiocilindro*alturacilindro);
    return 0;
}
