#include <stdio.h>

int main(){
    int x, y, div;
    while(1){
        scanf("%d %d", &x, &y);
        if ((x==0)&&(y==0))
            break;
        for (int i = 2; i < x; i++){
            if ((x%i)==0){
                div = i;
                break;
            }
        }
        if (div<y)
            printf("BAD %d\n", div);
        else
        printf("GOOD\n");
    }
    printf("\n");
    return 0;
}
