#include <stdio.h>
#include <string.h>

int main(){
    int i, j, k, n;
    char cod[51];
    char orig[51];
    scanf("%d ", &j);
    for (k=0;k<j;k++){
    scanf("%s", &cod);
    scanf("%d", &n);
    for (i=0;i<strlen(cod);i++){
        if ((cod[i]-n)>=65)
            printf("%c", cod[i]-n);
        else
            printf("%c", 90-65+cod[i]-n+1);
    }
    printf("\n");
    }
    return 0;
}
