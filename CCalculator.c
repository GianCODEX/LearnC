#include <stdio.h>
#include <string.h>

int main(){
    int results = 0;
    float num1 = '\0';
    float num2 = '\0';
    char user[50] = "";
    
    printf("Type your username: ");
    fgets(user, sizeof(user), stdin);

    printf("Hello, %s \n", user);

    printf("Addition Calculator\n");
    printf("--------------------------\n");
    printf("Type your first number: ");
    scanf("%f", &num1);

    printf("Type your second number: ");
    scanf("%f", &num2);

    results = num1 + num2;
    
    printf("Result: %d", results);
    
    return 0;
}