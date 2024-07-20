#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            if(j <= n - i){
                printf(" ");
            }
            else printf("*");
        }
        printf("\n");
    }
    for(int a = 1; a <= n ; a++){
        for(int b = 1; b <= n ; b++){
            if(b <= a - 1){
                printf(" ");
            }
            else printf("*");
        }
        printf("\n");
    }

    return 0;
}