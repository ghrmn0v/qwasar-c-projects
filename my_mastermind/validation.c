#include "my_mastermind.h"
#include<stdio.h>

int is_valid(char *input){
    int i=0;

    while(input[i]!='\0'){
        if(!('0'<=input[i] && input[i]<='8')) return 0;
        i++;
    }

    if(i!=4) return 0;
    for(int a=0;a<4;a++){
        for(int j=a+1;j<4;j++){
            if(input[a] == input[j]) return 0;
        }
    }
    return 1;
}