#include <stdio.h>

int main(){
    int s, t, f, h;
    scanf("%d %d %d", &s, &t, &f);
    h = s + t + f;
    if (h<24 && h>0)
        printf("%d\n", h);
    else if (h<0)
        printf("%d\n", 24 + h);
    else if (h==0)
        printf("%d\n", h);
    else
        printf("%d\n", h-24);
    return 0;
}
