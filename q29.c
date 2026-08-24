//Write a program to calculate the factorial of a number.
#include<stdio.h>
int main()
{
    int n,fact=1;
    printf("enter the value of n\n");
    scanf("%d",&n);
    for(int a=1;a<=n;a++)
    {
        fact=fact*a;
    }
    printf("%d",fact);
    return 0;
}