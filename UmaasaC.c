#include <stdio.h>
#include <string.h>

int main(){
    char option = 0;
    char crushname[50] = "";
    char me[50] = "";
    
    printf("Type your full name: ");
    fgets(me, sizeof(me), stdin);
    me[strlen(me) - 1] = '\0';

    while(strlen(me) < 5){
        printf("\nPlease enter your full name. \n");
        printf("Type your full name: ");
        fgets(me, sizeof(me), stdin);
        me[strlen(me) - 1] = '\0';
        break;
    } 
    
    if(strlen(me) < 5){
        printf("Please enter your full name. \n");
    }
    
    printf("Type your crush name: ");
    fgets(crushname, sizeof(crushname), stdin);
    crushname[strlen(crushname) - 1] = '\0';
    
    while(strlen(crushname) < 1){
        printf("Type your crush name: ");
        fgets(crushname, sizeof(crushname), stdin);
        crushname[strlen(crushname) - 1] = '\0';
    }
    
    printf("\n\nSa tingin mo ba may pagaasa ka kay %s? \n", &crushname);
    
    printf("Please enter Y if Yes, N if No: ");
    scanf("%c", &option);
    switch(option)
    {
        case 'y': case 'Y':
            printf("Kawawa, wala syang pantingin sa'yo. \n");
            break;
        case 'n': case 'N':
            printf("Baket umaasa kapa hanggang ngayon. \n");
            break;
        default:
            printf("Naku di masagot ni %s kase alam nya wala syang pagasa. \n", me);
            break;
    }
    return 0;
}    