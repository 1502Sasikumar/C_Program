#include<stdio.h>
#include<string.h>
int main()
{
    char ch[20];
    scanf("%s",ch);
    // char vow[ch];
    int count=0,i;
    for( i=0;i<ch[i];i++)
    {
    if(ch[i]=='a'||ch[i]=='e'||ch[i]=='i'||ch[i]=='o'||ch[i]=='u'||ch[i]=='A'||ch[i]=='E'||ch[i]=='I'||ch[i]=='O'||ch[i]=='U')
        {
            printf("%c",ch[i]);
        }
    }
    // for( i=0;i<ch[i];i++)
    // {
    //     if(vow[ch]==ch[i])
    //     count++;
    // }
    // vow[ch]='\0';
    // printf("%c\n",ch[i]);
}