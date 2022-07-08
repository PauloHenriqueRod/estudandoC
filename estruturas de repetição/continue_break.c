#include <stdio.h>

int main(){
    int i;
    for (i=0; i<1000; i+=1){;
    if (i==4){
        continue;
    }
    if (i==10){
        break;
    }
    printf("%d\n", i);
}
}
