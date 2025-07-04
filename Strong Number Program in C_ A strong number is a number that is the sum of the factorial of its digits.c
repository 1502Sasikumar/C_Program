#include<stdio.h>
int factorial(int n)
{
    int fact=1,i;
    for(int i=1;i<=n;i++)
    {
        fact=fact*i;
        
    }
    return fact;
}
int main()
{
    int n;
    scanf("%d",&n);
    int sum=0;
    int i=n;
    while(i>0)
    {
        sum=sum+factorial(i%10);
        i=i/10;
    }
    if(sum==n)
    printf("It is a Strong Number");
    else
    printf("It is not a Strong Number");
}
