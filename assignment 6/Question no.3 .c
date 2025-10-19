int main()
{
    int a,sum=0;
    printf("Enter the number of do you want to print num of 1 to n number");
    scanf("%d",&a);
    for(int i =1; i<=a; i+=2){
       
            
        sum+=i;
        
    }
    printf("Sum of 1 to %d number is = %d",a,sum);
}
