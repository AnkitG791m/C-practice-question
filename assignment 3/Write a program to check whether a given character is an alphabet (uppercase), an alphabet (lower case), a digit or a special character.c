#include <stdio.h>


int main(){
char ankit;
printf("Enter the charcter =  ");
scanf("%c",&ankit);
if(ankit>='A'&&ankit<='Z'){
    printf("Its a uppercase Character");
    
}
else if(ankit>='a'&& ankit<='z'){
    printf("Its a Lowercase Character");
}
else if (ankit>='0'&&ankit<='9'){
    printf("It's a numeric digit");
}
else{
    printf("It's special character");
}
}
