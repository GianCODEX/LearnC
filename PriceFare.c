#include <stdio.h>
#include <stdbool.h>
#include <string.h>

float jeepPrice = 15.00;
bool is_Student = false;
bool is_Senior = false;

char name[50];
char isStatus[10];

int main() {
    // Get name
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = '\0';  // remove newline

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
    isStatus[strcspn(isStatus, "\n")] = '\0';
    if (strcasecmp(isStatus, "yes") == 0) {
        is_Senior = true;
    }

    // Apply discounts
    if (is_Student) {
        if(is_Senior){
            printf("You have a discount of 40%\n");
            jeepPrice *= 0.6;
        }
        else{
            printf("You have a student discount of 20%\n");
            jeepPrice *= 0.8;
        }
    }
    else {
        if(is_Senior){
            printf("You have a senior discount of 20%\n");
            jeepPrice *= 0.8;
        }
    }

    // Output result
    printf("\nHello %s, the fare price is: %.2f\n", name, jeepPrice);

    return 0;
}
