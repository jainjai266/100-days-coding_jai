//Write a program to display the month name and number of days using switch-case for a given month number.
#include<stdio.h>
int main()
{
int month;
printf("enter month number\n");
scanf("%d",&month);
switch(month)
{
    case 1:
    printf("january 31days");
    break;
    case 2:
    printf("februaury 28days");
    break;
    case 3:
    printf("march 31days");
    break;
    case 4:
    printf("april 30days");
    break;
    case 5:
    printf("may 31days");
    break;
    case 6:
    printf("june 30days");
    break;
    case 7:
    printf("july 31days");
    break;
    case 8:
    printf("august 30days");
    break;
    case 9:
    printf("september 30days");
    break;
    case 10:
    printf("october 31days");
    break;
    case 11:
    printf("november 30days");
    break;
    case 12:
    printf("december 31days");
    break;
    default:
    printf("wrong input");
}
return 0;
}