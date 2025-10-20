//  Write a program to check whether a given number is a Prime number or not
#include <stdio.h>

int main()
{
    int num;
    printf("Enter number : ");
    scanf("%d",&num);
    int flag = 1;
    
    if(num<2){
        printf("It's not a prime.");  return 0;
    }
    for(int i=2; i<num; i++){
        if(num%i==0){
            flag = 0;
            break;
        }
    }
    if(flag)  printf("prime");
    else printf("not prime");
}
