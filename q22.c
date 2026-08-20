//Write a program to find profit or loss percentage given cost price and selling price.
#include<stdio.h>
int main()
{
    float profit,loss;
    float CP,SP;
    printf("enter CP,SP\n");
    scanf("%f %f",&CP,&SP);
    profit=SP-CP;
    loss=CP-SP;
    float profit_percentage=(profit/CP)*100;
    float loss_percentage=(loss/CP)*100;
    if(SP>CP)
    {
    printf("profit percentage is %f",profit_percentage);
    }
    else if(CP>SP)
    {
    printf("loss percentage is %f",loss_percentage);
    }
    else
    {
    printf("no profit no loss");
    }
    return 0;
}