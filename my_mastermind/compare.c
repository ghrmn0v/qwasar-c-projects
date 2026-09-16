#include "my_mastermind.h"
#include <stdio.h>

int compare(char *secret, char *input){
    int well = 0;
    int misplaced = 0;
    int ok=0;

    for(int i=0;i<4;i++){
        if(secret[i]==input[i]) well++;
        for(int j=0;j<4;j++){
            if(input[i]==secret[j] && i!=j) misplaced++;
        }
    }
    if(well==4){
        printf("Congratz! You did it!");
        ok=1;
        return ok;
    }
    else if(ok==0){
        printf("Well placed pieces: %d\n", well);
        printf("Misplaced pieces: %d\n", misplaced);
    }
    return 0;
}