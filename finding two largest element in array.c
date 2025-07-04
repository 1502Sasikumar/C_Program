#include<stdio.h>
int main()
{
    int n,i;
    int largest1=0,largest2=0;
    printf("Enter the size:\n");
    scanf("%d",&n);
    int a[n];
    printf("enter the array elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    if(a[0] > a[1]) {
        largest1 = a[0];
        largest2 = a[1];
    } else {
        largest1 = a[1];
        largest2 = a[0];
    }

        for(i=2;i<n;i++)
        {
            if(a[i] > largest1){
                largest2=largest1;
                largest1=a[i];
            }
            else if(a[i]>largest2 && a[i]!=largest1)
            {
                largest2=a[i];
            }
        }
    
    printf("First largest is %d\n",largest1);
    printf("second largest is %d\n",largest2);
    return 0;
}