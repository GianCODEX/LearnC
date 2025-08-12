#include <stdio.h>

int main() {
    int n;
    int i;
    
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("For Loop\n");
    i = 1;
    for (i = 1; i <= n; i++){
        printf("%d ", i);
    }
    
    printf("\nWhile Loop\n");
    i = 1;
    while( i <= n){
        printf("%d ", i);
    i++;
    }
    
    printf("\nDo-While Loop\n");
    i = 1;
    do {
        printf("%d ", i);
        i++;
    } while ( i <= n );
    
    
    return 0;
}