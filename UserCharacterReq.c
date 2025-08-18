#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main() {
    char name[50] = "";
    char location[50] = "\0";
    int age = 0;
    char student_input[10];
    bool isStudent = true;

    printf("Enter your username: (must have 10+ characters) ");
    fgets(name, sizeof(name), stdin);
    name[strlen(name) - 1] = '\0';
    // Check if the input is empty or has less than 10 characters
    
    while(strlen(name) == 0){
        printf("Must have 10+ more characters\n");
        printf("Enter your username: ");
        fgets(name, sizeof(name), stdin);
        name[strlen(name) - 1] = '\0';
    }
    
    while(strlen(name) <= 10){
        printf("\nYou have entered insufficient amount of characters\n");
        printf("\nPlease Try again...\n");
        printf("Enter your username: ");
        fgets(name, sizeof(name), stdin);
        name[strlen(name) - 1] = '\0';
    }
    
    if(strlen(name) >= 11){
        printf("\nHello %s\n", name);
    }
    else{
        printf("\nHello %s\n", name);
    }
    
    printf("Please enter your age: ");
    scanf("%d", &age);
    getchar();
        
    if(age<=17){
        printf("You are not allowed to use this feature yet...");
        return 1;
    }

    printf("Please type your address: ");
    fgets(location, sizeof(location), stdin);
    
    printf("Are you a student? (yes/no): ");
    fgets(student_input, sizeof(student_input), stdin);
    student_input[strcspn(student_input, "\n")] = '\0';
    if (strcasecmp(student_input, "yes") == 0) {
        isStudent = true;
    }

    printf("\n\nUser Information: \n");
    printf("-----------------------------\n");
    printf("USERNAME                AGE        LOCATION           STUDENT\n");
    printf("%-22s %-10d %-15s %-40s\n", name, age, location,isStudent ? "Yes" : "No");
    return 0;

}

