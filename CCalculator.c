#include <stdio.h>

int main(){
    
    char operator = '\0';
    double num1 = 0.0f;
    double num2 = 0.0f;
    double result = 0.0f;
    
    printf("Enter the first number: ");
    scanf("%lf", &num1);
    
    printf(" ( +  -  * / ) \n");
    printf("Choose an operator: ");
    scanf(" %c", &operator);
    
    printf("Enter the second number: ");
    scanf("%lf", &num2);
    
    switch(operator){
        case '+':
        result = num1 + num2;
            printf("The total add is... %.2lf", result);
            break;
        case '-':
        result = num1 - num2;
            printf("The total sub is... %.2lf", result);
            break;
        case '*':
        result = num1 * num2;        
            printf("The total multiply is... %.2lf", result);
            break;
        case '/':
        if(num2 == 0){
            printf("You can't divide by zero!");
        }
        else{
            result = num1 / num2;      
            printf("The total divide is... %.2lf", result);
        }
            break;
            default:
                printf("Invalid operator...\n");
    }
    return 0;
}