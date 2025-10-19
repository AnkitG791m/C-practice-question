//  Write a program to calculate sum of cubes of first N natural numbers

#include <stdio.h>




int main()
{
    int a,sum=0;
    printf("Enter the number");
    scanf("%d",&a);
    
    for(int i =1; i<=a; i++){
       
            
        sum+=i*i*i;
        
    }
    printf("sum of squares of 1 to  %d natural numbers is %d",a,sum);
}
