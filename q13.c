//Write a program to input a year and check whether it is a leap year or not using conditional statements.
//Year is a leap year if divisible by 4 but not 100, except if divisible by 400.
#include<stdio.h>
int main()
{
    int year;
    printf("enter the year\n");
    scanf("%d",&year);
    printf("year is %d",year );
    if(year%4==0)
    {
        printf("leap year");
    }
    else if(year%100!=0)
    {
        printf("leap year");
    }
    else if(year%400==0)
    {
        printf("leap year");
    }
    else
    {
        printf("not leap year");
    }
    return 0;
}