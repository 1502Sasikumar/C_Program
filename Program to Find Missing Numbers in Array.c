#include<stdio.h>
int main()
{
    int n;
    printf("Enter the num fro 1 to n:");
    scanf("%d",&n);
    int a[n];
    int present[n+1];
    
    for(int i=1;i<=n;i++)
    present[i]=0;
    
    printf("Enter the numbers present:");
    int m,num;
    scanf("%d",&m);
    
    printf("Enter the Elements:");
    for(int i=0;i<m;i++)
    {
        scanf("%d",&num);
        present[num]=1;
    }
    
    printf("Missing Numbers:");
    for(int i=1;i<=n;i++)
    {
       if( present[i]==0)
        printf("%d ",i);
    }
}