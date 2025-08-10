#include <stdio.h>
#include <string.h>

int main(){
    char option = 0;
    char crushname[50] = "";
    char me[50] = "";
    
    printf("Type your name: ");
    fgets(me, sizeof(me), stdin);
    me[strlen(me) - 1] = '\0';
    
    printf("Type your crush name: ");
    fgets(crushname, sizeof(crushname), stdin);
    crushname[strlen(crushname) - 1] = '\0';
    
    printf("\n\nSa tingin mo ba may pagaasa ka kay %s? \n", &crushname);
    
    printf("Please enter Y if Yes, N if No: ");
    scanf(" %c", option);
    switch(option)
    {
        case 'y': case 'Y':
            printf("Ulol di ka nya mahal.\n");
            break;
        case 'n': case 'N':
            printf("Baket umaasa kapa hanggang ngayon. \n");
            break;
        default:
            printf("Tanga mo naman boss naasa sa wala. \n");
            break;
    }
    return 0;
}    