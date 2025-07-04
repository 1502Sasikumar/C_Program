#include<stdio.h>
int main()
{
    int num,limit;
    scanf("%d %d",&num,&limit);
    for(int i=1;i<=limit;i++)
    {
        printf("%d * %d = %d\n",num,i,num*i);
    }
    return 0;
}