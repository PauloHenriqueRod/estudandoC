#include <stdio.h>

int main(){
    int v[3], i;
    for (i=0; i<3; i++)
        scanf("%d", &v[i]);
    for (i=0; i<3; i++)
        printf("%d ", v[i]);
}
