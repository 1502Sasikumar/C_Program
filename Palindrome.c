#include<stdio.h>
#include<string.h>
int main()
{
    char c[20];
    scanf("%s",c);
    int i;
    int j=strlen(c);
    for(i=0,j=j-1;i!=j;i++,j--)
    {
        if(c[i]!=c[j])
        break;
    }
    if(i==j)
    printf("Its palindrome");
    else
    printf("Its not palindrome");
    return 0;
}