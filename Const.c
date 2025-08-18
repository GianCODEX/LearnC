#include <stdio.h>

int main (){
    const int ageChild = 11;
    const int ageTeenager = 19;
    const int ageAdult = 59;
    int ageuser;
    
    printf("Enter your age: ");
    scanf("%d", &ageuser);
 
    if (ageuser<=ageChild){
    printf("Child.\n");
    }
 
    else if (ageuser<=ageTeenager){
    printf("Teenager.\n");
    }
 
    else if (ageuser<ageAdult){
    printf("Adult.\n");
    }
 
    else {
    printf("Senior\n");
    }
    
    return 0;
}
