#include <iostream>
using namespace std;

int fib(int n){

    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    } else if(n > 1){
        return fib(n-2)+fib(n-1);
    }
    return 0;
}

int main(){

    int n;
    int x = -1;
    cin >> n;

    for(int i = 0; i < n; i++){
        x = x+1;
        cout << fib(x) << " ";
    }

    return 0;
}
