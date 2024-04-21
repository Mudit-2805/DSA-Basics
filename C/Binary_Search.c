#include <stdio.h>

int Binary_Search(int a[], int l, int h, int x){

    if(l > h){ 
        printf("Element does not exist.");
        return 0;
    }

    int mid = (l + h)/2;

    if(x == a[mid]){
        printf("Element exists");
    } else if(x > a[mid]){
        Binary_Search(a, mid+1, h, x);
    } else if(x < a[mid]){
        Binary_Search(a, l, mid-1, x);
    }

    return 0;
}

int main(){

    int a[] = {1, 3, 5, 7, 9};

    Binary_Search(a, 0, 5, 4);

    return 0;
}
