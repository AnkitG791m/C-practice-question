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
    if(a>b)
    low=b;
    else 
    low=a;
    for(;;){
         if(high%low==0){
            printf("%d",low);
            break;
        }
        int temp=high%low;
       
        high=low;
        low=temp;
        
    }
    

    return 0;
}
