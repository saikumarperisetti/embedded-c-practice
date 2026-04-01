#include<stdio.h>
typedef struct {
    unsigned int device: 1; // 1 bit for device
    unsigned int interrupt: 1; 
    unsigned int error: 1; // 1 bit for error
    unsigned int reset: 1;   
} register_t;

int main(){
    register_t reg = {0}; // Initialize all bits to 0

    // Set device bit
    reg.device = 1;
    printf("Device bit: %u\n", reg.device);
  
    // interrupt bit
    reg.interrupt = 0;
    printf("Interrupt bit: %u\n", reg.interrupt);


    // Set error bit
    reg.error = 1;
    printf("Error bit: %u\n", reg.error);

    // reset bit
    reg.reset = 0;
    printf("Reset bit: %u\n", reg.reset);



    return 0;
}