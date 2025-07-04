#include<stdio.h>
#include<string.h>
int main()
{
    char ch[20];
    int i,j,count;
    scanf("%s",ch);
    for(i=0;ch[i]!='\0';i++)
    {
        count=0;
        for(j=0;ch[j]!='\0';j++){
        if(ch[i]==ch[j])
            count++;
    }
    if(count==1){
    printf("%c\n",ch[i]+1);
    break;
}
}
return 0;
}
