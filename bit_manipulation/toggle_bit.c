#include<stdio.h>
int toggle_bit(int num, int pos){
    return num ^ (1<<pos);
}
int main(){
    int x = 10;
    int n;
    printf("Enter the position: ");
    scanf("%d",&n);
    if(n<0 || n>31){
        printf("Invalid position\n");
        return 1;
    }
    int result = toggle_bit(x, n);
    printf("Result: %d\n", result);
    return 0;
}