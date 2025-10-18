#include <stdio.h>
int main(){
char ankit;
printf("Enter the charcter =  ");
scanf("%c",&ankit);
if(ankit>='A'&&ankit<='Z'){
    printf("Its a uppercase");
    
}
else if(ankit>='a'&& ankit<='z'){
    printf("Its a Lowercase");
    
}
else{
    printf("Please enter only A to z character");
}
}
