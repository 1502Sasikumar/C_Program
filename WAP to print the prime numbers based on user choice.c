#include<stdio.h>
int main()
{
    int i,j,count,r1,r2;
    printf("Enter r1:");
    scanf("%d",&r1);
    printf("Enter r2:");
    scanf("%d",&r2);
    for(i=r1;i<=r2;i++)
    {
        count=0;
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
            count++;
        }
        if(count==2)
        printf("%d ",i);
    }
    
     
}