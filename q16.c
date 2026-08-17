//Write a program to input three numbers and find the largest among them using if–else.
#include<stdio.h>
int main()
{
    int a;
    int b;
    int c;
    printf(" enter the value of a,b,c\n");
    scanf("%d %d %d",&a ,&b, &c);
    if (a>=b&&a>=c)
    {
        printf("a is largest");
    }
    else if(b>=a&&b>=c)
    {
        printf("b is largest");
    }
    else
    {
        printf("c is largest");
    }
    return 0;
}