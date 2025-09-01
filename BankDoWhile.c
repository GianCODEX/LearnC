#include <stdio.h>

float deposit();
float withdraw(float balance);
void checkBalance(float balance);

int main(){
    
    int choice = 0;
    float balance = 1000;
    
    printf("BANKO NI MAMA\n");
    
    do{
        printf("\nPick an option:");
        printf("\n1. Balance");
        printf("\n2. Deposit");
        printf("\n3. Withdraw");
        printf("\n4. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);
        
       switch(choice){
           case 1:
                checkBalance(balance);
                break;
           case 2:
                balance += deposit();
                break;
           case 3:
                balance -= withdraw(balance);
                break;
           case 4:
                printf("You have exited the program...\n");
                break;
            default:
                printf("Invalid Choice! Pick between 1 - 4\n");
       } 
    }while(choice != 4);
}

float deposit(){
    
    float amount = 0.0f;
    
    printf("\nEnter amount: ");
    scanf("%f", &amount);
    
    if(amount < 0){
        printf("Invalid amount\n");
        return 0.0f;
    }
    else{
        printf("You have successfully deposited %.2f\n", amount);
        return amount;
    }
}
float withdraw(float balance){
    
    float amount = 0;
    
    printf("Enter amount to withdraw: ");
    scanf("%f", &amount);
    
    if(amount < 0){
        printf("Invalid amount\n");
        return 0.0f;
    }
    else if(amount > balance){
        printf("Insufficient Funds! Your balance is %.2f", balance);
        return 0.0f;
    }
    else if((balance - amount) < 1000){
        printf("\nYou must have 1000 Balance in your bank.\n");
        return 0.0f;
    }
    else{
        printf("You have successfully withdrew %.2f", amount);
        return amount;
    }
}
void checkBalance(float balance){
    printf("\nYour current balance is: %.2f\n", balance);
}
