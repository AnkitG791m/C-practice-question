/* Write a program to reverse a given number
input:-
        1234

output:-
        4321 
*/ 

#include <stdio.h>

int main()
{
    printf("Enter a number do you to reverse:- ");
    int num,reverse=0;
    scanf("%d",&num);
    while(num>0){
        reverse=reverse*10+num%10;
        num/=10;
    }
    printf("%d",reverse);
   
}
