#ifndef REGISTER_H
#define REGISTER_H

#define ENABLE_DEVICE (1<<0)
#define ENABLE_INT    (1<<1)
#define ERROR_FLAG    (1<<2)
#define RESET_BIT     (1<<3)

void enable_device(unsigned int *reg);
void enable_interrupt(unsigned int *reg);
void set_error(unsigned int *reg);
void clear_interrupt(unsigned int *reg);
void toggle_reset(unsigned int *reg);
void show_status(unsigned int reg);

#endif