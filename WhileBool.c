#include <stdio.h>
#include <stdbool.h>

bool isRunning = true;
char choices = '\0';

int main () {
    
    while(isRunning){
        printf("Hello Programmer!\n");
        printf("Would you like to continue programming? (Type 'Y' if yes and 'N' if no): ");
        scanf(" %c", &choices);
        
        if(choices != 'Y'){
            isRunning = false;
        }
    }
    
    printf("You have now exited the program.");
    
    return 0;
}
