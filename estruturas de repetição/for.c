#include <stdio.h>

int main(){
    int n;
    int i;
    printf("QUANTAS VEZES VAI REPETIR? ");
    scanf("%d", &n);
    for(i=1; i<=n; i+=1){
        printf("%d-Paulinho\n", i);
    }
}
