#include <stdio.h>

int main()
{
    char name[]={"Ankit"};
    int size;
    size=sizeof(name)/sizeof(name[0]);
    size-=1;
    char temp[size];
    int i=0,j=size;
    
    for(i; i<size; i++,j--){
        temp[j]=name[i];
        
    }
    printf("%s",temp);
    
    
}

