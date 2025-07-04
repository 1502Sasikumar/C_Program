#include<stdio.h>
int main()
{
    int n;
    printf("Enter the size:");
    scanf("%d",&n);
    int a[n],i,j,temp[n],count=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Array before elimination duplicate Elements..\n");
    for(i=0;i<n;i++)
    printf("%d ",a[i]);
    
    for(i=0;i<n;i++)
    {
        
        for(j=0;j<count;j++)
        {
            if(a[i]==temp[j])
            break;
        }
         if(j==count){
        temp[count]=a[i];
        count++;
    }
    }
   
    printf("After Eliminating the duplicate Elements\n");
    for(i=0;i<count;i++)
    printf("%d ",temp[i]);
}