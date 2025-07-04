#include<stdio.h>
int main()
{
    int n,i,j;//n=4
    int count=1;
    scanf("%d",&n);
    for(i=1;i<=n;i++)//1,2,3,4
    {
        for(j=1;j<=i;j++){
        printf("%d ",count);
        count++;}
        printf("\n");
    }
}