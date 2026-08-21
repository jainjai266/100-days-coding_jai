/*Write a program to calculate library fine based on late days as follows: 
First 5 days late: ₹2/day 
Next 5 days late: ₹4/day 
Next 20 days days late: ₹6/day 
More than 30 days: Membership Cancelled.
*/
#include<stdio.h>
int main()
{
    int fine,days;
    printf("enter the number of days\n");
    scanf("%d",&days);
    if (days<=5)
    {
    fine=days*2;
    printf("fine is rs%d",fine);
    }
    else if (days>5&&days<=10)
    {
    fine=5*2+((days-5)*4);
    printf("fine is rs%d",fine);
    }
else if(days<=30&&days>10)
{
    fine=5*2+5*4+((days-10)*6);
    printf("fine is rs%d",fine);
}    
else
{
    printf("membership cancelled");
}
return 0;
}