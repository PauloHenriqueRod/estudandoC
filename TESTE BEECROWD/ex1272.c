#include <stdio.h>
#include <string.h>

int main(){
    int n, i, k=0, l, m, j;
    char frase[51], frasereal[51];
    scanf("%d\n", &n); // Quantidade de casos de teste
    for (l=0; l<n; l++){ // Repeti��es
    j=0;
    gets(frase);    // Obtendo a frase codificada
    if (frase[0] != ' '){ // Indicando a primeira letra do texto codificado (O diferente de ' ' � para caso o primeiro caractere esteja em branco)
        frasereal[0] = frase[0]; // Fiz isso para facilitar na obten��o do resto do texto
        j++;
    }
    for (i=0; i<strlen(frase); i++){ // Obtendo o resto do texo descodificado
        if (frase[i]==' '&& frase[i+1]!=' '){ // frase[i]==' '-> Para garantir que o termo anterior seja o espa�o em branco
            frasereal[j]=frase[i+1]; // frase[i+1]!=' ' par garantir que o termo seja uma letra, e n�o um espa�o em branco
            j++;                     // No final se adiciona frase[i+1] caso n�o seja um espa�o em branco
        }
    }
    frasereal[j] = '\0'; // '\0' indica o fim da string
    printf("%s\n", frasereal);
    }
    return 0;
}
