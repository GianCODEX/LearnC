#include <stdio.h>

#define AGE_CHILD 11
#define AGE_TEENAGER 19
#define AGE_ADULT 59

int main (){
    int ageuser;
    
    printf("Enter your age: ");
    scanf("%d", &ageuser);
 
    if (ageuser<=AGE_CHILD){
    printf("Child.\n");
    }
 
    else if (ageuser<=AGE_TEENAGER){
    printf("Teenager.\n");
    }
 
    else if (ageuser<AGE_ADULT){
    printf("Adult.\n");
    }
 
    else {
    printf("Senior\n");
    }
    
    return 0;
}
