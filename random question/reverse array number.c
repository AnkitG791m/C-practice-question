#include <stdio.h>

int main()
{
    int name[]={10,20,30,40};
    int size;
    size=sizeof(name)/sizeof(name[0]);
    
    int temp[size];
    int i=0,j=size-1;
    
    for(i; i<size; i++,j--){
        temp[j]=name[i];
        
    }
    for(i=0;i<size-1; i++){
        
        printf("%d ,",temp[i]);
    }
    printf("%d ",temp[size-1]);
}
