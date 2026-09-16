#include<stdio.h>
#include "my_printf.h"

int put_str(char *s){
    if(s==NULL) return 0;

    int count=0;
    int i=0;

    while(s[i]!='\0'){
        put_char(s[i]);
        count++;
        i++;
    }
    return count;
}