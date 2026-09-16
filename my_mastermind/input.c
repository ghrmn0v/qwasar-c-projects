#include "my_mastermind.h"
#include<stdio.h>

int get_input(char *buffer){
    char c;
    int i=0;

    while(read(0, &c, 1) > 0){
        if(c=='\n') break;
        buffer[i] = c;
        i++;
    }

    buffer[i] = '\0';
    return i;
}
