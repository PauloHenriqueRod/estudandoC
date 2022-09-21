#include <stdio.h>

int main(){
    int x = 5;
    int *p;
    p = &x;
    printf("%d\n", *p);
    x = 7;
    printf("%d\n", *p);
    *p = 45;
    printf("%d\n", x);
    printf("%d\n", *p);
    return 0;
}
