//Write a program to count digits in a given number

#include <stdio.h>

int main()
{
    int num,count=0;
    printf("Enter the number =");
    scanf("%d",&num);
    while(num!=0){
        num/=10;
        count++;
    }
printf("%d",count);
    return 0;
}
