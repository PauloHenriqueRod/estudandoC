#include <stdio.h>

float CalculaArea(float raio){
    float area;
    area = 3.14*(raio*raio);
    return area;
}

float CalculaPerimetro(float raio){
    float perimetro;
    perimetro = 6.28*raio;
    return perimetro;
}

int main(){
    float r, area, perimetro;
    while(1){
    printf("Digite o raio: ");
    scanf("%f", &r);
    if (r<0)
        break;
    area = CalculaArea(r);
    perimetro = CalculaPerimetro(r);
    printf("AREA = %.2f\n", area);
    printf("PERIMETRO = %.2f\n", perimetro);
    }
    return 0;
}
