#include<stdio.h>
int main()
{
    char ch[200];
    int vowels=0,consonant=0,special=0;
    fgets(ch,sizeof(ch),stdin);
    for(int i=0;ch[i]!='\0';i++)
    {
        if(ch[i]=='a'||ch[i]=='e'||ch[i]=='i'||ch[i]=='o'||ch[i]=='u'||ch[i]=='A'||ch[i]=='E'||ch[i]=='O'||ch[i]=='U')
        vowels++;
        else 
        consonant++;
    }
    int i;
    if(ch[i]=='\t'||ch[i]=='\0'||ch[i]==' ')
    special++;
    
    consonant=consonant-special;
    printf("Vowels :%d\n",vowels);
    printf("consonant:%d\n",consonant);
}