#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,count=0;
    int sum=0;
    scanf("%d",&n);
    int temp=n;
    for(i=n;i;i=i/10)
    count++;
    while(n)
    {
        int rem=n%10;
        sum=sum+pow(rem,count);
        n=n/10;
    }
    if(sum==temp)
    {
        printf("Armstrong Number..");
    }
    else
    printf("Not a Armstrong Number..");

}