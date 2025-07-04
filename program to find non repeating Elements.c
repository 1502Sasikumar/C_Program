#include<stdio.h>
int main()
{
    int size;
    printf("Enter the array size:");
    scanf("%d",&size);
    int a[size];
    for(int i=0;i<size;i++)
    scanf("%d",&a[i]);
    printf("Non repeating Elements are:");
    for(int i=0;i<size;i++)
    {
        int count=0;
        for(int j=0;j<size;j++)
        {
            if(a[i]==a[j])
            count++;
        }
        if(count==1)
        printf("%d ",a[i]);
    }
    return 0;
}