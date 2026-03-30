#include<stdio.h>
#define ENABLE_DEVICE  (1<<0)
#define ENABLE_INT     (1<<1)
#define ERROR_FLAG     (1<<2)
#define RESET_BIT      (1<<3)
unsigned int registerControl_Interrupt(unsigned int reg){
   return reg |= ENABLE_DEVICE | ENABLE_INT;
}
unsigned int SetErrorFlag(unsigned int reg){
    return reg |= ERROR_FLAG;
}
unsigned int clearInterrupt( unsigned int reg){
    return reg &= ~ENABLE_INT;
}
unsigned int toggleReset(unsigned int reg){
    return reg ^= RESET_BIT;
}
void printBinary(unsigned int num){
    for(int i=7; i>=0; i--){
        printf("%d", (num>>i)&1);//checking the bit is 1 or 0 and printing 
    }
    printf("\n");
}
int is_device_enabled(unsigned int reg){
    return (reg & ENABLE_DEVICE)? 1: 0;
}
int is_interrupt_enabled(unsigned int reg){
    return (reg & ENABLE_INT)? 1:0;
}
int is_error_set(unsigned int reg){
    return (reg & ERROR_FLAG)? 1: 0;
}
int main(){
    unsigned int num = 0;
    unsigned int regInterrupt = registerControl_Interrupt(num);
    printBinary(regInterrupt);

    unsigned int errorFlag = SetErrorFlag(regInterrupt);
    printBinary(errorFlag);

    unsigned int clearInterruptValue = clearInterrupt(errorFlag);
    printBinary(clearInterruptValue);

    unsigned int toggleValue = toggleReset(clearInterruptValue);
    printBinary(toggleValue);

    printf("device --> %d\n", is_device_enabled(toggleValue));
    printf("interrupt --> %d\n", is_interrupt_enabled(toggleValue));
    printf("error --> %d\n", is_error_set(toggleValue));

    printf("\nFinal value : %u\n", toggleValue);

    return 0;
}