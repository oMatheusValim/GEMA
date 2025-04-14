#include <stdio.h>

int main(){
    int A, M;

    scanf("%d", &A);
    scanf("%d", &M);

    if (A+M > 50){
        printf("N");
    } else{
        printf("S");
    }
    return 0;
}