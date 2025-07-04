#include<stdio.h>
#include<string.h>
int main()
{
    char ch[20];
    fgets(ch,sizeof(ch),stdin);
    for(int i=0;ch[i]!='\0';i++)
    {
        if(ch[i]==' ')
        {
            printf("\n");
        }
        else
         printf("%c",ch[i]);
    }
   return 0;
 }