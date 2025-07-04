#include<stdio.h>
int main()
{
    char str[20];
    int i;
    scanf("%s",str);
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]!='x')
        {
            printf("%c",str[i]);
        }
    }
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]=='x')
        printf("%c",str[i]);
    }
   
}