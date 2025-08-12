#include <stdio.h>

int choice = 0;
double pounds = 0.0f;
double kilograms = 0.0f;

int main(){
    printf("Weight Conversion Calculator\n");
    printf("1. Kilograms to Pounds\n");
    printf("2. Pounds to Kilograms\n");
    printf("\nEnter your choice: ");
    scanf("%d", &choice);
    switch(choice){
        case 1:
            printf("Enter the weight in kilograms: ");
            scanf("%lf", &kilograms);
            printf("%.2f kilograms is equal to %.2f pounds\n", kilograms, kilograms * 2.204620);
        break;
        case 2:
            printf("Enter the weight in pounds: ");
            scanf("%lf", &pounds);
            printf("%.2f pounds is equal to %.2f kilograms\n", pounds, pounds / 2.204620);
        break;
        default:
            printf("Try again! Pick 1 or 2");   
    }
    return 0;
}