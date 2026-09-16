#include "my_printf.h"
#include<stdio.h>

int put_char(char c){
    write(1, &c, 1);
    return 1;
}