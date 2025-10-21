/*  Write a program to print first N terms of Fibonacci series
input:-
        8

output:-
        0 1 1 2 3 5 8 13
*/ 

#include <stdio.h>

int main()
{
    printf("Enter a number do you to reverse:- ");
    int num,a=0,b=1; //a is previous value and b is current value
    
    scanf("%d",&num); //jab tak "i" ke "num" barabar na ho jaye tab tak loop chalega
    for(int i=0; i<num; i++){
        int temp=a+b; // (previous value + current value) ko add kr ke temp me daal do jo updated vlaue hoga
        printf("%d ",a); // previous value 'a' hai to har bar previous value ko print kro 
        a=b; //previous value me ki jagah current value ko rakh diya jaye 
        b=temp; // current value ko updated value ko rakh diya jaye
    }
}
/* humne 2 variable liya "a" and "b" ab hum mante hai ki previous value "a" hai and current value "b"
hai to hum user se input lenge ki user ko kitne digit tak Fibonnaci number print karana hai aur jitna user 
value dega utni bar loop chalega (suppose user ne value diya =5) uske baad loop ke andar hum temp 
naam ka variable baanayenge jisme previous value(a) and current value (b) ko add kr ke store karwa denge
ab humare paas ek updated value hai temp naam se aab hum previous value ko print karyenge 
jo ki "a" hoga uske baad "b" ki value "a" me daal denge 
aur updated value b me daal denge to aab humara current value a me b ki value aur b me updated vlaue temp ki
ki value store ho gai */
