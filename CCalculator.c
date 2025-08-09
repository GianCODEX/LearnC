#include <stdio.h>
#include <string.h>

int main(){
    int results = 0;
    float num1 = '\0';
    float num2 = '\0';
    char user[50] = "";
    
    printf("Type your username: ");
    fgets(user, sizeof(user), stdin);
    user[strlen(user) - 1] = '\0';
    
    printf("\n\nHello, %s \n", user);
    printf("I will give you a brief description of this code, you can only add you can't subtract, divide, and multiply\n");
    printf("\nPress enter to continue \n");
    
    getchar();
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