#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int fib(int n, int a, int b){

    if(n==1){ printf("%d", 0); }
    else if(n > 1){
        printf("%d %d ", 0, 1);
        for(int i = 0; i < n-2; i++){
            int j = a + b;
            printf("%d ", j);
            a = b;
            b = j;
        }
    } else {
        printf("Invalid Input");
    }

    return 0;
}

int main(){

    int n;
    int a = 0;
    int b = 1;

    scanf("%d", &n);

    fib(n, a, b);


    return 0;
}
