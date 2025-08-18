#include <stdio.h>
#include <stdbool.h>
#include <string.h>

#define JEEPPRICETO_KAHOY 25 //Defines the value of JeepPrice to Kahoy
#define JEEP_PRICE 15 //Defines the value of JeepPrice

float jeepPrice = 15.00;
float jeepPriceToKahoy = 25.00;
bool is_Student = false;
bool is_Senior = false;
bool is_MataasNaKahoy = false;
bool is_MataasNaLupa = false;

char mataasNaKahoy[50];
char name[50];
char destination[50];
char isStatus[10];

int main() {
    float finalfare; // acts as function for #define {5,6}
    // Get name
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = '\0';  // remove newline

    // Get destination
    printf("Choose your Destination \n(Mataas na Kahoy / Mataas na Lupa): ");
    fgets(destination, sizeof(destination), stdin);
    destination[strcspn(destination, "\n")] = '\0'; // remove newline

    // Identify location
    if (strcasecmp(destination, "Mataas na Kahoy") == 0) {
        is_MataasNaKahoy = true;
        finalfare = JEEPPRICETO_KAHOY; 
    } else if (strcasecmp(destination, "Mataas na Lupa") == 0) {
        is_MataasNaLupa = true;
        finalfare = JEEP_PRICE;
    } else {
        printf("Invalid destination. Exiting.\n");
        return 1;
    }

    // Check student status
    printf("Are you a student? (yes/no): ");
    fgets(isStatus, sizeof(isStatus), stdin);
    isStatus[strcspn(isStatus, "\n")] = '\0';  // remove newline
    if (strcasecmp(isStatus, "yes") == 0) {
        is_Student = true;
    }

    // Check senior status
    printf("Are you a senior citizen? (yes/no): ");
    fgets(isStatus, sizeof(isStatus), stdin);
    isStatus[strcspn(isStatus, "\n")] = '\0'; // remove newline
    if (strcasecmp(isStatus, "yes") == 0) {
        is_Senior = true; 
    }

    // Apply discounts
    if (is_MataasNaKahoy) { // Applies when destination is Mataas na Kahoy
        if (is_Student && is_Senior) {  
            printf("You have a discount of 40%%\n");
            finalfare *= 0.6;
        } else if (is_Student) {
            printf("You have a student discount of 20%%\n");
            finalfare *= 0.8;
        } else if (is_Senior) {
            printf("You have a senior discount of 20%%\n");
            finalfare *= 0.8;
        } else {
            printf("\nHello %s, the fare price to %s is: %.2f\n", name, destination, finalfare);
            return 0; // Ends the code with Discount
        }
        printf("\nHello %s, the fare price to %s is: %.2f\n", name, destination, finalfare); // Ends the code without Discount
    }

    if (is_MataasNaLupa) { // Applies when destination is Mataas na Lupa
        if (is_Student && is_Senior) { 
            printf("You have a discount of 40%%\n");
            finalfare *= 0.6;
        } else if (is_Student) {
            printf("You have a student discount of 20%%\n");
            finalfare *= 0.8;
        } else if (is_Senior) {
            printf("You have a senior discount of 20%%\n");
            finalfare *= 0.8;
        }
        printf("\nHello %s, the fare price to %s is: %.2f\n", name, destination, finalfare); // Ends the code with Discount
    }
    
    return 0;
}
