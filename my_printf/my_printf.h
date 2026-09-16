#ifndef MY_PRINTF_H
#define MY_PRINTF_H

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>

int my_printf(char *format, ...);

int put_char(char c);
int put_str(char *s);
int put_int(int n);
int put_unsigned(unsigned int n);
int put_hex(unsigned int n);
int put_pointer(void *ptr);

#endif