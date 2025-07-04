#include<stdio.h>
int main()
{
    int temp,d1,d2,d3;
    for(int i=1;i<=1000;i++)
    {
        if(i<=9)
        {
            printf("%d ",i);
        }
        else
        {
            d1=i%10;
            d2=(i%100-d1)/10;
            d3=(i%1000-d2)/100;
            temp=(d1*d1*d1)+(d2*d2*d2)+(d3*d3*d3);
        }
        if(temp==i)
        printf("%d ",temp);
    }
}