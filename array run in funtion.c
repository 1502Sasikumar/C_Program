#include<stdio.h>
void fun(int *a,int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d\n",*(a+i));
    }
    
    
}
int main()
{
    
    int a[5]={10,20,30,40,50};
    fun(&a[0],8);
    return 0;
    
    
}