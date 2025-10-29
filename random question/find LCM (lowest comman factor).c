#include <stdio.h>

int main()
{
    int a,b,high,low;
   printf("Enter 2 numbers for HCF : ");
    scanf("%d %d",&a,&b);
    if(a>b)
    high=a;
    else 
    high=b;
  
  for(int i=high; ; i++){
      if(i%a==0&&i%b==0){
      printf("%d",i);
      break;
      }
  }
    

}
