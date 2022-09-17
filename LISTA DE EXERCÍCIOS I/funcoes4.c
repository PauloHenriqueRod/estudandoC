#include <stdio.h>

int fatorial(int n){
    int fat = 1;
    for (int i=1; i<=n; i++){
        fat*=i;
    }
    return fat;
}

int arranjos(int n, int k){
    int arr;
    arr = fatorial(n)/fatorial(n-k);
    return arr;
}

int main(){
    printf("%d", arranjos(5, 3));
}
