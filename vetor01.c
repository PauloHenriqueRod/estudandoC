#include <stdio.h>

int main(){
    int v[10], i, sn=0, x;
    scanf("%d %d %d %d %d %d %d %d %d %d", &v[0], &v[1], &v[2], &v[3], &v[4], &v[5], &v[6], &v[7], &v[8], &v[9]);
    scanf("%d", &x);
    for (i=0; i<10; i++)
        if (v[i] == x)
            sn++;
    if (sn==0)
        printf("NAO");
    else
        printf("SIM");
    return 0;
}
