#include <stdio.h>

int main()
{
   int first, second;
   printf("Enter the first value =");
   scanf("%d",&first);
   
   
   if(first%3==0&&first%2==0){
       printf("This number is divisible 3 and 2 both");
   }
  
else{
    printf("This number is not divisible 3 and 2 both");
}
    return 0;
}
