#include <stdio.h>

int main()
{
   int first, second;
   printf("Enter the first value =");
   scanf("%d",&first);
   
   
   if(first%7==0||first%3==0){
       if(first%7==0&&first%3==0){
       printf("This number is divisible 3 and 2 both");
   }
        else if (first%7==0){
            printf("Its only divisible by 7");
            
        }
        else if (first%3==0){
            printf("Its only divisible by 3");
        }
   }
  
else{
    printf("This number is not divisible 3 and 2 both");
}
    return 0;
}
