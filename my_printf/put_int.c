#include<stdio.h>
#include "my_printf.h"

int put_int(int n){
    int count=0;
    long num;
    if(n<0){
        put_char('-');
        count ++;
        num = -(long)n;
    }
    else
{
    num = n;
}

    if(num>=10){
        count += put_int(num / 10);
    }
    
    put_char('0' + (int)(num % 10));
    count++;

    return count;
}