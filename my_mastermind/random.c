#include "my_mastermind.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void generate_secret(char *secret){

    int i = 0;
    while(i < 4){
        int num = rand() % 9;
        int ok=1;
        for(int j=0;j<i;j++){
            if(secret[j] == (num + '0')){
                ok=0;
            }
        }
        if(ok){
            secret[i] = num + '0';
            i++;
        }
    }
    secret[4]='\0';
}