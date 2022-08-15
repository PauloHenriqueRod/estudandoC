#include <stdio.h>
#include <math.h>

int main(){
    int a;
    printf("NUMERO DE LADOS DO POLIGONO: ");
    scanf("%d", &a);
    float x[a+1];
    float y[a+1];
    float area = 0;
    int i;
    for (i=0; i<a; i++){
        printf("Valores de x%d e y%d: ", i+1, i+1);
        scanf("%f %f", &x[i], &y[i]);
    }
    x[a]=x[0];
    y[a]=y[0];
    for (i=0; i<a; i++)
        area += x[i]*y[i+1];
    for (i=0; i<a; i++)
        area -= x[i+1]*y[i];
    printf("%.1f", fabs(area/2));
    return 0;
}
