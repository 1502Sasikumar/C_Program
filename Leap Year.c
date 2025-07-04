/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int year;
    scanf("%d",&year);
    while(year>0)
    {
        if((year%4==0 && year%100!=0 ) || (year%400==0))
        printf("Its an leap year");
        else
        printf("Its not an leap year");
        break;
    }

    return 0;
}