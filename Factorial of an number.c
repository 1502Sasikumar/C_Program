#include <stdio.h>

int main()
{
    int fact=1;
    int n;
    scanf("%d",&n);
    while(n>0)
    {
        fact=fact*n;
        n--;
    }
    printf("%d",fact);
    

    return 0;
}

