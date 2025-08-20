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

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (){
    
    srand(time(NULL));
    
    int guess = 0;
    int tries = 0;
    int min = 1;
    int max = 100;
    int answer = (rand() & (max - min + 1)) + min;
    
    printf("*** GUESS THE NUMBER ***\n");
    
    do{
        printf("Guess a number between %d - %d: ",min, max );
        scanf("%d", &guess);
        tries++;
        
        if(guess < answer){
            printf("TOO LOW!\n");
        } 
        else if (guess > answer){
            printf("TOO HIGH!\n");
        } 
        else {
            printf("YOU'RE CORRECT!\n");
        }
        
    }while(guess != answer);
    
    printf("The answer is %d\n", answer);
    printf("It took you %d tries\n", tries);
    
    return 0;
    
}
