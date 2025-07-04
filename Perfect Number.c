/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
 int n,sum=0,i;
 printf("Enter the num:");
 scanf("%d",&n);
 for(i=1;i<n;i++)
 {
     if(n%i==0)
     sum+=i;
 }
 if(sum==n)
 {
     printf("It is perfect Num");
 }
 else
 {
     printf("It is not a perfect num");
     
 }
}
