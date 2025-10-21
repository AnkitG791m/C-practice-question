/* WAP to print a massage to considering male or female
input:-
m or f;

output:-
if user is male  than print hello sir good morning
if user is female than print hello mam good morning 
*/ 

#include <stdio.h>

int main()
{
    printf("Enter the m or f  (male or female): ");
    char name;
    scanf("%c",&name);
    if(name=='m'||name=='M'){
        printf("hello sir good morning");
    }
    else if(name=='f' || name=='F'){
        printf("hello mam good morning");
        
    }
    else{
        printf("Please enter only f or m ");
    }
}
