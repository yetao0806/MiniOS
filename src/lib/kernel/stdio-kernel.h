#ifndef __LIB_KERNEL_STDIOSYS_H
#define __LIB_KERNEL_STDIOSYS_H
#include "stdint.h"
void printk(const char* format, ...);
void sys_putchar(const char chr);
#endif