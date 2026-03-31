
#include "register.h"

void enable_device(unsigned int *reg){
    *reg |= ENABLE_DEVICE;
}

void enable_interrupt(unsigned int *reg){
    *reg |= ENABLE_INT;
}
void set_error(unsigned int *reg){
    *reg |= ERROR_FLAG;
}
void clear_interrupt(unsigned int *reg){
    *reg &= ~ENABLE_INT;
}
void toggle_reset(unsigned int *reg){
    *reg ^= RESET_BIT;
}
void show_status(unsigned int reg){
    printf("Device: %d\n", bit_status(reg, 0));
    printf("Interrupt: %d\n", bit_status(reg, 1));
    printf("Error: %d\n", bit_status(reg, 2));
}
