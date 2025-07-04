#include<stdio.h>
int main()
{
    int n,s=0;
    scanf("%d",&n);
    int a=n;
    while(n>0)
    {
        int r=n%10;
        s=s*10+r;
        
        n=n/10;
         
    }
    printf("%d\n",s);
    printf("%d\n",a);
    if(s==a)
    printf("It is palindrome");
    else
    printf("It is not palindrome");
   
    return 0;
}