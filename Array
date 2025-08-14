#include <stdio.h>

int main() {
    
    int n[10];
    int i, M;
    
    for (i = 0; i < 10; i++){
        printf("Enter a number %d: ", i + 1);
        scanf("%d", &n[i]);
    }
    M = n[0];
    for (i=1; i<10; i++){
        if (n[i] > M){
            M = n[i];
        }
    }
    printf("Highest number is: %d\n", M);
    return 0;
}
