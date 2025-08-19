#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    
    srand(time(NULL));

    int min = 50;
    int max = 100;

    //Pseudocode random numbers
    int randomNum = (rand () % (max - min + 1 ) ) + min;
    int randomNum2 = (rand () % (max - min + 1 ) ) + min;
    int randomNum3 = (rand () % (max - min + 1 ) ) + min;

    int randNum = (rand () % max) + min; // Problem... Goes over MAX

    int randdNum = rand () % 2; // Random Number between 1, 0

    int randdNum = (rand () % 2) + 1; // Random Number between 1, 2

    printf("%d %d %d\n", randomNum, randomNum2, randomNum3);


    return 0;
}
