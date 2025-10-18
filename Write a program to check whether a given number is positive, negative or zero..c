#include <stdio.h>

int main()
{
   long ankit;
   printf("Enter the first value =");
   scanf("%d",&ankit);
   
  if(ankit>0){
      printf("its a positive number");
  }
  else if (ankit==0){
      printf("Zero is neither positive nor negative");
  }
  else{
      printf("its a negative number");
  }
    return 0;
}
