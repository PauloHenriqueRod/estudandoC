#include <stdio.h>

int main(){
    int x = 1, aux, a, i, j;
    while(x){
        scanf("%d", &x);
        int mat[x][x];
        for (i=0; i<x; i++){
            for (j=0, a=(i+1), aux = 0; j<x; j++){
                if ((aux == 0) && (i!=j)){
                    mat[i][j] = a;
                    a--;
                }
                if (i == j){
                    a = 1;
                    mat[i][j] = a;
                    a++;
                    aux += 1;
                }
                if ((aux != 0) && (i!=j)){
                    mat[i][j] = a;
                    a++;
            }
            }
        }
        for (i = 0; i < x; i++)
		{
			for (j = 0; j < x; j++)
			{
				if (j == 0)
					printf("%3hd", mat[i][j]);
				else
					printf(" %3hd", mat[i][j]);

			}

			printf("\n");
		}

		printf("\n");
    }
}
