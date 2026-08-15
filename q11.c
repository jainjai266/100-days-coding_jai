//Write a program to input an integer and check whether it is even or odd using if–else.
#include <stdio.h>
int main()
{
    int num;
    printf("enter the number\n");
    scanf("%d",&num);
    printf("number is %d",num);
    if (num%2==0)
    {
    printf("number is even\n");
    }
    else
    {
    printf("number is odd\n");
    }
    return 0;
}