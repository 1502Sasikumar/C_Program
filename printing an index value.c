/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
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
}
    
