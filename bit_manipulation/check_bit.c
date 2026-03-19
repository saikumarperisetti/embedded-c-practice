#include<stdio.h>
int check_bit(int num, int pos){
    return (num & (1<<pos))? 1: 0;
}
int main(){
    int x,n;
    printf("Enter the number: ");
    scanf("%d", &x);

    printf("Enter the position: ");
    scanf("%d",&n);
    if(n<0 || n>31){
        printf("Invalid position\n");
        return 1;
    }
    int result = check_bit(x, n);

    printf("Result: %d",result);
    return 0;
}