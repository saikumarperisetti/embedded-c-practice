#include "register.h"
//#include "register.c"
#include<stdio.h>
void print_menu(){
    printf("\n====== MENU =======\n");
    printf("1. Enable Device\n");
    printf("2. Enable Interrupt\n");
    printf("3. Set error\n");
    printf("4. Clear interrupt\n");
    printf("5. Toggl reset\n");
    printf("6. show status\n");
    printf("0. Exit\n");
}
unsigned int bit_status(unsigned int num, int pos){
    return (num >> pos) & 1;
}
int main(){
    unsigned int reg = 0;
    int choice;

    while(1){
        print_menu();
        printf("Enter choice: ");
        scanf("%d", &choice);
        if (choice == 0){
            break;
        }
        switch(choice){
            case 1: enable_device(&reg); break;
            case 2: enable_interrupt(&reg); break;
            case 3: set_error(&reg); break;
            case 4: clear_interrupt(&reg); break;
            case 5: toggle_reset(&reg); break;
            case 6: show_status(reg); break;
            default: printf("Invalid choice\n"); break;
        }
    }
}