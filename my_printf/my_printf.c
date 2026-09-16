#include "my_printf.h"
#include <stdarg.h>
#include <stdio.h>

int my_printf(char *format, ...){
    va_list args;
    va_start(args, format);

    int total = 0;
    int i = 0;
    
    while(format[i] != '\0'){
        if(format[i]=='%'){
            i++;
            if(format[i]=='c') total+=put_char(va_arg(args, int));
            else if(format[i]=='s')  total+=put_str(va_arg(args, char*));
            else if(format[i]=='%')  total+=put_char('%');
            else if (format[i] == 'd') total += put_int(va_arg(args, int));
        }
        else total+=put_char(format[i]);
        i++;
    }

    va_end(args);
    return total;
}