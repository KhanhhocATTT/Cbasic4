#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            printf("*");
        }
        printf("\n");
    }
    for(int a = n; a >= 1; a--){
        for(int b = 1; b <= a; b++){
            printf("*");
        }
        printf("\n");
    }

    return 0;     
}