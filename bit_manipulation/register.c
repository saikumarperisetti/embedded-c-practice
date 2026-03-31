#include<stdio.h>
#define ENABLE_DEVICE (1<<0)
#define ENABLE_INT    (1<<1)
#define ERROR_FLAG    (1<<2)
#define RESET_BIT     (1<<3)
unsigned int is_bit_set(unsigned int num){
    int pos;
    printf("Enter which bit you want to check: ");
    scanf("%d", &pos);
    return (num >> pos) & 1;
}
unsigned int bit_status(unsigned int num, int pos){
    return (num >> pos) & 1;
}
int main(){
    unsigned int reg = 0;
    int choice;
    while(1){
        printf("\nEnter your choice: \n1.EnableDevice\n2.EnableInterrupt\n3.SetError\n4.ClearInterrupt\n5.ToggleReset\n6.ShowStatus\n0.Exit\n");
        scanf("%d",&choice);
    
        if (choice == 0){
            break;
        }
        switch(choice){
            case 1: reg |= ENABLE_DEVICE; break;
            case 2: reg |= ENABLE_INT; break;
            case 3: reg |= ERROR_FLAG; break;
            case 4: reg &= ~ENABLE_INT; break;
            case 5: reg ^=  RESET_BIT; break;
            case 6: printf("Device: %d\n", bit_status(reg, 0));
                    printf("Interrupt: %d\n", bit_status(reg, 1));
                    printf("Error: %d\n", bit_status(reg, 2));
                    break;
            default : printf("Invalid choice\n");
        }
    }
}
