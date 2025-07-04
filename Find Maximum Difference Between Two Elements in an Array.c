#include<stdio.h>

int maximum_diff(int a[],int size)
{
    int max_diff=a[1]-a[0];
    int min=a[0];
    for(int i=0;i<size;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            if(a[i]-min > max_diff)
            max_diff=a[i]-min;
            
            if(a[i]<min)
            min=a[i];
        }
    }
    return max_diff;
}
int main()
{
    int size;
    
    printf("Enter the size:");
    scanf("%d",&size);
    int a[size];
    for(int i=0;i<size;i++)
    {
        scanf("%d",&a[i]);   
    }
    printf("%d",maximum_diff(a,size));
    return 0;
    
}