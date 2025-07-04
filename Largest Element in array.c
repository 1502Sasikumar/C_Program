#include<stdio.h>
int main()
{
    int n,i,j,large=0;
    printf("enter the size:\n");
    scanf("%d",&n);
    int a[n];
    printf("enter the array elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        large=a[0];
        if(a[0]>a[i])
        {
            large=a[0];
        }
        
    }
    printf("Largest element is %d\n",large);
    return 0;
}