#include<stdio.h>
int clear_bit(int num, int pos){
    return num &= ~(1<<pos);
}
int main(){
    int x = 10;
    int n;
    printf("Enter the position: ");
    scanf("%d",&n);
    int result = clear_bit(x,n);
    printf("Result: %d\n",result);
    return 0;
}