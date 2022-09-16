#include <stdio.h>

int main(){
    float horas, minutos;
    printf("HORAS DIGITADAS: ");
    scanf("%f", &horas);
    minutos = horas*60;
    printf("MINUTOS DIGITADOS: %f", minutos);
    return 0;
}
