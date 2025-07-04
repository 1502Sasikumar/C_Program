#include<stdio.h>
int main()
{
    int n,i,digits[10],count=0;
    scanf("%d",&n);
    
    int temp=n;
    while(temp>0)
    {
        digits[count++]=temp%10;
        temp=temp/10;
    }
    if(count>=2)
    {
        int t=digits[0];
        digits[0]=digits[1];
        digits[1]=t;
    }
    int result=0;
    for(i=count-1;i>=0;i--)
    {
    result=result *10+digits[i];
    }
    printf("%d",result);
}