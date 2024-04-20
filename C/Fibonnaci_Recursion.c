#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int fib(int n){
    
    if(n==0){
        return 0; 
    }
    if(n==1){ 
        return 1; 
    }
    else if(n > 1){
        return fib(n-2)+fib(n-1);

    } else {
        printf("Invalid Input");
    }

    return 0;
}

int main(){

    int n;
    int x;

    scanf("%d", &n);
    x = -1;

    for(int i = 0; i < n; i++){
        x = x + 1;
        printf("%d ", fib(x));
    }
    


    return 0;
}
