// Write a program to calculate LCM of two numbers
#include <stdio.h>

int main()
{
    int num1,num2,temp;
    int lcm;
    
    printf("Enter two num : ");
    scanf("%d %d",&num1,&num2);
    temp = num1 > num2 ? num1 : num2 ;
    
    for(int i=temp; ; i++){
        if(i%num1==0 && i%num2==0){
            lcm = i;
            break;
        }
    }
    printf("%d",lcm);
}
