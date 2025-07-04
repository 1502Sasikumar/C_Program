#include<stdio.h>
int main()
{
    int size,i,j;
    int temp=0;
    printf("enter the size:\n");
    scanf("%d",&size);
    printf("Enter the array elements:\n");
    int a[size];
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Array elements are..\n");
    for(i=0;i<size;i++)
    printf("%d ",a[i]);
    
    for(i=0,j=size-1;i<j;i++,j--)
    {
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
        
    }
    printf("Reverse elements are...\n");
    for(i=0;i<size;i++)
    printf("%d\n",a[i]);
    
}