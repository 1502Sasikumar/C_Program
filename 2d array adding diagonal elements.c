#include<stdio.h>
int main()
{
    int r,c,i,j;
    int sum=0;
    printf("Enter the row & column size:\n");
    scanf("%d %d",&r,&c);
    int a[r][c];
    printf("Enter the elements:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
           // printf("%d ",a[i][j]);
            if(i==j)
            sum+=a[i][j];
        }
        
    }
    printf("%d",sum);
    

    
}