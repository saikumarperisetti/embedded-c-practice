#include<stdio.h>
int count_bits(int num){
    int count = 0;
    while(num != 0){
        count += num&1;
        num>>=1;
    }
    return count;
}
int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    int result = count_bits(n);
    printf("Result: %d\n", result);
    return 0;
}