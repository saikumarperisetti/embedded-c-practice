#include<stdio.h>
int set_bit(int num, int pos){
    return num|=(1<<pos);
}
int main(){
    int x = 8;
    int n;

    printf("Enter the bit position: ");
    scanf("%d", &n);

    int result = set_bit(x, n);

    printf("Result: %d\n", result);

    return 0;
}