#include <stdio.h>
#include <stdlib.h>

#define MAX_ROUNDS 200

int main(int argc, char* argv[]){
    int currentRound = atoi(argv[1]);
    char* previousRoundOppoInput = argv[2];
    
    if(currentRound>200){
        exit(0);
    }

    printf("NO\n");

    return 0;
}