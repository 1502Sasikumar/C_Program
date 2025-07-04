#include<stdio.h>
#include<math.h>
int main()
{
    int n1,n2;
    scanf("%d %d",&n1,&n2);
    int i;
    for(i=n1;i<=n2;i++)
    {
        float p=sqrt(i);
        int a=p;
        if(a==p)
        printf("%d ",i);
    }
    return 0;
}