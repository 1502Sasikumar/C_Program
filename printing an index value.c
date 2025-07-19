
#include <stdio.h>
#include<string.h>

int main()
{
    char c[20];
    int i;
    char str;
    scanf("%s ",c);
    scanf("%c",&str);
    for(i=0;c[i]!='\0';i++)
    {
        if(c[i]==str)
        break;
        
    }
    if(c[i]==str)
        printf("%d",i);
    else
        printf("Not Found.\n");
}
    
