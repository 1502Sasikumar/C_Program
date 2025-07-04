#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    scanf("%d",&n);
    char *numbers[]={"one","two","three","four","five","six","seven","eight","nine"};
    if(n>=1 && n<=9)
    printf("%s",numbers[n-1]);
    else
    printf("Greater than 9\n");
}