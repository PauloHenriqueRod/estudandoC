#include <stdio.h>
#include <string.h>

int main(){
    // O tamanho de uma string
    char palavra[20] = "Fluminense";
    int tamanho = strlen(palavra);
    printf("Tamanho = %d\n", tamanho);
    printf("-----------------------------\n");

    // Copiando uma string
    char palavradois[20] = "Louco da cabeca";
    char palavradosinova[30];
    strcpy(palavradosinova, palavradois);
    printf("Copia = %s\n", palavradosinova);
    printf("-----------------------------\n");

    // Comparando strings
    char palavra1[20] = "Tricolor de coracao";
    char palavra2[30] = "Tricolor de coracao";
    if (strcmp(palavra1, palavra2)==0)
        printf("STRINGS IGUAIS\n");
    else
        printf("STRINGS DIFERENTES\n");
    return 0;
}
