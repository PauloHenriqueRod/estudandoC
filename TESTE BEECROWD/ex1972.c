#include <stdio.h>
#include <string.h>

int main(){
    int n, i, k=0, l, m, j;
    char frase[51], frasereal[51];
    scanf("%d\n", &n);
    for (l=0; l<n; l++){
    j=0;
    gets(frase);
    if (frase[0] != ' '){
        frasereal[0] = frase[0];
        j++;
    }
    for (i=0; i<strlen(frase); i++){
        if (frase[i]==' '&& frase[i+1]!=' '){
            frasereal[j]=frase[i+1];
            j++;
        }
    }
    frasereal[j] = '\0';
    printf("%s\n", frasereal);
    }
    return 0;
}
