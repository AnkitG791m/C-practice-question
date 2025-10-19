#include <stdio.h>

int main()
{
//Write a program which takes the month number as an input and display number of days in that month
	        int month;
	        printf("Enter the month in 1 to 12= ");
	        scanf("%d",&month);
	        if(month==1||month==3||month==5||month==7||month==8||month==11||month==12){
	            printf("In this month total day 31");
	        }
	        else if(month==2){
	            printf("In this month total days 28");
	        }
	        else if(month==4|month==6|month==9||month==11){
	            printf("In this month total days 30");
	            
	        } 
	        else {
	            printf("Please enter valid month under 1 to 12");
	        }
}
