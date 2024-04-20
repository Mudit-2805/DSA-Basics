#include <iostream>
using namespace std;

int fib(int n, int a, int b){

    if(n==1){
        cout << 0;
    } else if(n > 1){
        cout << 0 << " " << 1 << " ";
        for(int i = 0; i < n-2; i++){
            int j = a+b;
            cout << j << " ";
            a = b;
            b = j;
        }
    }
    return 0;
}

int main(){

    int n;
    int a = 0;
    int b = 1;

    cin >> n;

    fib(n, a, b);

    return 0;
}
