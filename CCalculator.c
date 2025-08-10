#include <stdio.h>
#include <string.h>
#include <math.h>

int main(){
    double results = 0.0;
    double num1 = 0.0;
    double num2 = 0.0;
    int age = 0;
    char user[50] = "";
    
    printf("Type your username: ");
    fgets(user, sizeof(user), stdin);
    user[strlen(user) - 1] = '\0';
    
    printf("Enter your age: ");
    scanf("%d", &age);
    
    if(age >= 18){
         printf("\n\nHello, %s \n", user);
         printf("I will give you a brief description of this code, you can only multiply you can't add, subtract, divide\n");
         printf("\nPress enter to continue \n");
    
         getchar();
         printf("Multiplier Calculator\n");
         printf("--------------------------\n");
         printf("Type your first number: ");
         scanf("%lf", &num1);

         printf("Type your second number: ");
        scanf("%lf", &num2);
         results = num1 * num2;
    
         printf("Result: %.2lf", results);
    }
    else{
        printf("You are not old enough to use this... ");
    }
    return 0;
}