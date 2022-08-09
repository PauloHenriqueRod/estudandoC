#include <stdio.h>

int main(){
    int n, anos;
    scanf("%d", &n);
    for (;n>0;n--){
        scanf("%d", &anos);
        if (anos<2015)
            printf("%d D.C.\n", 2015-anos);
        else
            printf("%d A.C.\n", anos - 2015 + 1);
    }
    return 0;
}
