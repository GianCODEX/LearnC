#include <stdio.h>

int choice = 0;
double pounds = 0.0f;
double kilograms = 0.0f;

int main(){
    printf("Weight Conversion Calculator\n");
    printf("1. Kilograms to Pounds\n");
    printf("2. Pounds to Kilograms\n");
    printf("Enter your choice: \n\n");
    scanf("%d", &choice);
    
    if(choice == 1){
        printf("Enter the weight in Kilograms: ");
        scanf("%lf", &kilograms);
        printf("%.2f kilograms is equal to %.2f pounds\n", kilograms, kilograms * 2.20462);
    }
    else if(choice == 2){
        printf("Enter the weight in pounds: ");
        scanf("%lf", &pounds);
        printf("%.2lf pounds is equal to %.2lf kilograms\n", pounds, pounds / 2.20462);
    }
    else{
        printf("Invalid Choice! Please enter 1 or 2\n");
    }
    return 0;
}