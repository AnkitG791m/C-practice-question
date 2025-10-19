//. Write a program to calculate factorial of a number
#include <stdio.h>

int main()
{
    int num,ans=1;
    printf("Enter the number =");
    scanf("%d",&num);
    for(int i=num; i>=1;i--){
        
        ans *=i;
    }
    printf("%d",ans);

    return 0;
}
