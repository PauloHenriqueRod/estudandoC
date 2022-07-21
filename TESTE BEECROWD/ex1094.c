#include <stdio.h>

int main(){
    int totalcasos, n, i, C, R, S;
    float mediac, mediar, medias;
    C = 0; R = 0; S = 0;
    char cob;
    scanf("%d", &totalcasos);
    for(i=1; i<=totalcasos; i++){
        scanf("%d %c", &n, &cob);
        switch(cob){
            case 'C':
                C+=n;
                break;
            case 'R':
                R+=n;
                break;
            case 'S':
                S += n;
                break;
        }
    }
    printf("Total: %d cobaias\n", (C+R+S));
    printf("Total de coelhos: %d\n", C);
    printf("Total de ratos: %d\n", R);
    printf("Total de sapos: %d\n", S);
    mediac = (((C/7.0)/((C+R+S)))*7)*100;
    mediar = (((R/7.0)/((C+R+S)))*7)*100;
    medias = (((S/7.0)/((C+R+S)))*7)*100;
    printf("Percentual de coelhos: %.2lf %%\n", mediac);
    printf("Percentual de ratos: %.2lf %%\n", mediar);
    printf("Percentual de sapos: %.2lf %%\n", medias);
}
