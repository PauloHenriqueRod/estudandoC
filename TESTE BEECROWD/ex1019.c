#include <stdio.h>

int main(){
    int N, i, f, resto, resto2;
    scanf("%d", &N);
    i = 0;
    f = 0;
    while((N - 3600*i)>=3600){
        i++;
    }
    resto = N - 3600*i;
    while((resto - 60*f)>=60){
        f++;
    }
    resto2 = resto - (60*f);
    printf("%d:%d:%d\n", i, f, resto2);
    return 0;
}
