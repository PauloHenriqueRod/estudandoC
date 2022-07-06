#include <stdio.h>

int main(){
    int id;
    printf("ID [1/2/3/4]");
    scanf("%d", &id);
    switch(id){
        case 1:
            printf("ARROZ\n");
            break;
        case 2:
            printf("BATATA\n");
            break;
        case 3:
            printf("MANJERICAO\n");
            break;
        case 4:
            printf("MAMAO\n");
            break;
        default:
            printf("ID INVALIDO\n");
            break;
    }
}
