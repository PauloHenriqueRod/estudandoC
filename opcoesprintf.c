#include <stdio.h>

/*
    CARACTERES ESPECIAS:
    \n = NOVA LINHA
    \t = TABULA��O
    \\ = CONTRABARRA
    %% = PORCENTO

    ALINHAMENTO:
    [%xd] = ALINHAMENTO � DIREITA  COM x ESPA�OS
    [%-xd] = ALINHAMENTO � ESQUERDA COM x ESPA�OS
    [%0xd] = ALINHAMENTO COMPLETADO COM ZEROS

    DEFINIR PRECIS�O:
    %.xf = DEFINE APROXIMA��O DE x CASAS

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
