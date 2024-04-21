#include <iostream>
using namespace std;

int Binary_Search(int a[], int low, int high, int x){

    if(low > high){
        printf("Element does not exist.");
        return 0;
    }

    int mid = (low+high)/2;

    if(x == a[mid]){
        printf("Element exists.");
    } else if(x > a[mid]){
        Binary_Search(a, mid+1, high, x);
    } else if(x < a[mid]){
        Binary_Search(a, low, mid-1, x);
    }

    return 0;
}

int main(){

    int a[] = {1, 3, 5, 7, 9};

    Binary_Search(a, 0, 5, 8);

    return 0;
}
