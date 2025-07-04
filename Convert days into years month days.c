#include<stdio.h>
int main()
{
    int days,year,weeks,day;
    printf("Enter the days:");
    scanf("%d",&days);
    
    year=days/365;
    weeks=(days%365)/7;
    day=(days%365)%7;
    printf("Years:%d Month:%d days:%d\n",year,weeks,day);
}