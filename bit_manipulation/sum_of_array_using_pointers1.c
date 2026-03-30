#include<stdio.h>
int sum(int *arr, int size){
    if(arr == NULL || size<=0){
        return 0;
    }
    int total =0;
    while(size--){
        total += *arr;
        arr++;
    }
    return total;
}

int main(){
    int arr[] = {1,2,3,4,5};
    int result = sum(arr, 5);
    printf("Sum value : %d\n", result);
    return 0;
}