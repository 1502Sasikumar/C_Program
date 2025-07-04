#include<stdio.h>
#include<string.h>
int main()
{
    int hour,minute,second;
    char period[3];
    printf("Enter the Time in hh:mm:sec period \n");
    scanf("%d:%d:%d %s",&hour,&minute,&second,period);
    
    if(strcmp(period,"AM")==0)
    {
        if(hour==12)
        hour=0;
    }
    else if(strcmp(period,"PM")==0)
    {
        if(hour!=12)
        hour+=12;
    }
    printf("Time in 24 hour format %02d:%02d:%02d\n",hour,minute,second);
}