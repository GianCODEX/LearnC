#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main() {
    char name[50] = "";
    

    printf("Must have 10+ more characters\n");
    printf("Enter your username: ");
    fgets(name, sizeof(name), stdin);
    name[strlen(name) - 1] = '\0';
    
    while(strlen(name) == 0){
        printf("Must have 10+ more characters\n");
        printf("Enter your username: ");
        fgets(name, sizeof(name), stdin);
        name[strlen(name) - 1] = '\0';
    }
    
    if(strlen(name) >= 11){
        printf("Hello %s", name);
    }
    else if(strlen(name) == 10){
        printf("Hello %s", name);
    }
    else{
        printf("You have entered the insufficient characters in your user, please try again.");
    }
    return 0;
}