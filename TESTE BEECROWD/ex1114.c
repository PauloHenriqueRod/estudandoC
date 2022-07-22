#include <stdio.h>

int main(){
    int x, y;
    do{
	scanf("%f %f", &x, &y);
    if (x > 0){
        if (y > 0)
            printf("primeiro\n");
        if (y < 0)
            printf("quarto\n");
    }
    if (y > 0){
        if (x < 0)
            printf("segundo\n");
    }
    if (y < 0){
        if (x < 0)
            printf("terceiro\n");
    }
    }while(x!=0 && y!=0);
    return 0;
}
