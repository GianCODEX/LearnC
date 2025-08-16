#include <stdio.h> 
#include <stdbool.h>
#include <string.h>

void hello(char name[], int age); //function prototype
bool ageCheck(int age); //function prototype

char name[50] = "";
int age = 0;

int main() {
    
    printf("Enter name: ");
    fgets(name, sizeof(name), stdin);
    name[strlen(name) - 1] = '\0';
    
    printf("Enter age: ");
    scanf("%d", &age);
    
    hello(name , age);

    if(ageCheck(age)){
        printf("You are old enough to gym.");
    }
    else{
        printf("You must be sigma enough to gym.");
    }

    return 0;
}

void hello(char name[], int age){
    printf("\n\nHello %s\n", name);
    printf("You are %d years old\n", age);
}

bool ageCheck(int age){
    return age >= 16;
}
