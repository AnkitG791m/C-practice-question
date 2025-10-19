#include <stdio.h>
//Write a program to calculate the sum of even or odd between 1 to 10
int main()
{
    int odd=0,even=0;
    for(int i=0; i<=10; i++){
        if(i%2==0){
        even+=i;
    }
    else{
        odd+=i;
    }
    }
printf("the sum of all odd number is %d\n",odd);
    
printf("the sum of all even number is %d",even);

    return 0;
}
