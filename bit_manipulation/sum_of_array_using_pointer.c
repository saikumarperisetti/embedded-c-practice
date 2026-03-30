#include<stdio.h>
int sum(int *arr){
    int sum =0;
    for(int i=0;i<5;i++){
        sum+= *(arr+i);
    }
    return sum;
}
int main(){
    int arr[] = {1,2,3,4,5};
    int result =0;
    result = sum(arr);
    printf("Sum value :%d\n", result);
    return 0;
}