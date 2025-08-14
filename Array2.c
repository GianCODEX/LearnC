#include <stdio.h>

int main(){
    
    int numbers[15], i, largest;

    for(i = 0; i < 10; i++){ // Initialization; condition; increment/decrement
        printf("Enter a number %d: ", i + 1);
        scanf("%d", &numbers[i]); // &numbers[i] is scanning for number of arrays
    }
    largest = numbers[0];
    
    for(i=1; i<10; i++){  // Initialization; condition; increment/decrement
        if(numbers[i] > largest){
            largest = numbers[i];
        }
    }
    printf("\nThe highest number is %d: ", largest);
}
