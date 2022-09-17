#include <stdio.h>

int menu(){
    int x;
    printf("1-Alterar raio\n2-Exibir diametro\n3-Exibir perimetro\n0-Sair\n");
    scanf("%d", &x);
    return x;
}

int main(){
    int quest;
    quest = menu();
    while(quest){
        quest = menu();
        printf("FLU\n");
    }
}
