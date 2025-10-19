#include <stdio.h>
// Write a program which takes the length of the sides of a triangle as an input. Display whether the triangle is valid or not. 
int main()
{
	int a,b,c;
	printf("Enter the first angle = ");
	scanf("%d",&a);
	printf("Enter the second angle = ");
	scanf("%d",&b);
	printf("Enter the third angle = ");
	scanf("%d",&c);
	int result=a+b+c;

	if(result==180){
	    printf("Its a traingle");
	}
else {
    printf("It's not a traingle");
}
	        return 0;
}
