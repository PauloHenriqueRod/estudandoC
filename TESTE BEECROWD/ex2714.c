#include <stdio.h>
#include <string.h>


int main(){
    char ra[100];
    int i, j, n;
    scanf("%d", &n);
    for (i=0;i<n;i++){
        scanf("%s", &ra);
        if (ra[0]!='R' || ra[1]!='A' || strlen(ra)!=20)
            printf("INVALID DATA");
        else{
        for (j=2;j<strlen(ra);j++){
            if (ra[j]!='0')
                break;
        }
        for (;j<strlen(ra);j++)
            printf("%c", ra[j]);
        }
        printf("\n");
    }
}
