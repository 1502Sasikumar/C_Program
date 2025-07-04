#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(n%2==0)
    {
        int res=n*(n-1);
        printf("%d\n",res);
    }
    else
    {
        int res1=(n*n)+n;
        printf("%d\n",res1);
    }
}