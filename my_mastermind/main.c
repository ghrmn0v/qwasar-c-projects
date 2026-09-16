#include<stdio.h>
#include "my_mastermind.h"
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[]){

    srand(time(NULL));
    char secret[5] ;
    generate_secret(secret);
    int attempt=10;

    for(int i=0;i<argc;i++){
        if (argv[i][0] == '-' && argv[i][1] == 'c'){
            int j = 0;
            while (argv[i+1][j] != '\0')
            {
                secret[j] = argv[i+1][j];
                j++;
            }
            secret[j] = '\0';
        }

        if (argv[i][0] == '-' && argv[i][1] == 't'){
            attempt=atoi(argv[i+1]);
        }
    }



    printf("Will you find the secret code?\n");
    printf("Please enter a valid guess\n");

    for(int i=0;i<attempt;i++){
        printf("Round %d\n", i);
        printf(">");
        char buffer[5];
        fflush(stdout);
        get_input(buffer);
        while(is_valid(buffer) == 0){
            printf("Wrong input!\n");
            printf(">");
            fflush(stdout);
            get_input(buffer);
        }
        int res=compare(secret, buffer);
        if(res==1) break;
    }
}