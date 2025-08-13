#include <stdio.h>
#include <stdbool.h>

float jeepPrice = 15.00;
bool isStudent = false;
bool isSenior = true;

int main(){
    
    if(isStudent){
        if(isSenior){
            printf("You have a student discount of 20%\n");
            printf("You have a senior discount of 20%\n");
            jeepPrice *= 0.6;
        }
        else{
            printf("You have a student discount of 20%\n");
            jeepPrice *= 0.8;
            
        }
    }
    else{
        if(isSenior){
            printf("You have a senior discount of 20%\n");
            jeepPrice *= 0.8;
        }
    }
    
    printf("The fare price is %.2f", jeepPrice);