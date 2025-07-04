#include<stdio.h>
int main()
{
    char s[100];
    int sum=0;
    scanf("%s",s);
    for(int i=0;i<s[i]!=0;i++)
    {
        if(s[i]>='0' && s[i]<='9')
        {
           int a=(int) s[i]-48;
           sum+=a;
        }
        printf("%d",sum);
        return 0;
    }
}