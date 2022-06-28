#include <stdio.h>

/*
    CARACTERES ESPECIAS:
    \n = NOVA LINHA
    \t = TABULAÇÃO
    \\ = CONTRABARRA
    %% = PORCENTO

    ALINHAMENTO:
    [%xd] = ALINHAMENTO À DIREITA  COM x ESPAÇOS
    [%-xd] = ALINHAMENTO À ESQUERDA COM x ESPAÇOS
    [%0xd] = ALINHAMENTO COMPLETADO COM ZEROS

    DEFINIR PRECISÃO:
    %.xf = DEFINE APROXIMAÇÃO DE x CASAS

    IMPRIMIR EM HEXADECIMAL OU OCTADECIMAL:
    %o = OCTAL
    %x = hexadecimal
    %X = HEXADECIMAL

*/
int main(){
    printf("Teste\nTeste\n");
    printf("\tTabulacao\n");
    printf("\\\n");
    printf("%%\n");

    printf("[%5d] [%-5d] [%05d]\n", 1, 111, 1111);

    printf("%.4f\n", 1.2324234235234);

    printf("%o\n", 10);
    printf("%x\n", 124);
    printf("%X\n",124);
}
