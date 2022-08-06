#include <stdio.h>

int main(){
    int a=0, n, x, aant=1;
    scanf("%d", &n);
    for (;n>0;n--){
        if (n==1)
            printf("%d\n", a);
        else
            printf("%d ", a);
        a+=aant;
        aant=a-aant;
    }
    return 0;
}
