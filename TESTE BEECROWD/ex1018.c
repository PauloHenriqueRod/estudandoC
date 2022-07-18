#include <stdio.h>

int main(){
    int N, cem, cinq, vint, dez, cinc, dos, um, Ninicial;
    scanf("%d", &N);
    printf("%d\n", N);
    cem = 0;
    cinq = 0;
    vint = 0;
    dez = 0;
    cinc = 0;
    dos = 0;
    um = 0;
    while (N>=100){
        cem++;
        N-=100;
    }
    while (N>=50){
        cinq++;
        N-=50;
    }
    while (N>=20){
        vint++;
        N-=20;
    }
    while (N>=10){
        dez++;
        N-=10;
    }
    while (N>=5){
        cinc++;
        N-=5;
    }
    while (N>=2){
        dos++;
        N-=2;
    }
    while (N>=1){
        um++;
        N-=1;
    }
    printf("%d nota(s) de R$ 100,00\n", cem);
    printf("%d nota(s) de R$ 50,00\n", cinq);
    printf("%d nota(s) de R$ 20,00\n", vint);
    printf("%d nota(s) de R$ 10,00\n", dez);
    printf("%d nota(s) de R$ 5,00\n", cinc);
    printf("%d nota(s) de R$ 2,00\n", dos);
    printf("%d nota(s) de R$ 1,00\n", um);
}
