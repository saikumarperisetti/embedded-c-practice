#include<stdio.h>
#define DEVICE_BIT 0
#define INTERRUPT_BIT 1
#define ERROR_BIT 2
#define RESET_BIT 3

typedef struct {
    unsigned int value; // 32-bit register
} register_t;

int main(){
    register_t reg = {0}; // Initialize register to 0

    // Set device bit
    reg.value |= (1 << DEVICE_BIT);
    printf("Device bit: %d\n", (reg.value >> DEVICE_BIT) & 1);

    // Clear interrupt bit
    reg.value &= ~(1 << INTERRUPT_BIT);
    printf("Interrupt bit: %d\n", (reg.value >> INTERRUPT_BIT) & 1);

    // Toggle error bit
    reg.value ^= (1 << ERROR_BIT);
    printf("Error bit: %d\n", (reg.value >> ERROR_BIT) & 1);

    // Check reset bit status
    
    printf("Reset bit status: %d\n", (reg.value >> RESET_BIT) & 1);

    return 0;
}