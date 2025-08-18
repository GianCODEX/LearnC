#include <stdio.h>

#define PASS_MARK 75

int main() {
    const int MAX_Score = 100;
    
    int StudentScore;
    
    printf("Passing Mark (using #define): %d\n", PASS_MARK);
    printf("Maximum Score (using const): %d\n", MAX_Score);
    
    printf("Enter student score ( 0 - %d ): ", MAX_Score);
    scanf(" %d", &StudentScore);
    
    if(StudentScore >= PASS_MARK){
        printf("You have passed, results: %d\n", StudentScore);
    }else{
        printf("You have failed, results: %d\n", StudentScore);
    }
    return 0;
}
