//Write a program to implement a basic calculator using switch-case for +, -, *, /, %.
#include<stdio.h>
int main()
{
    int a,b;
    printf("enter the numbers a and b");
    scanf("%d %d",&a,&b);
    char operation;
    printf("enter the operation to perform\n");
    scanf(" %c",&operation);
    switch(operation)
    {
        case '+':
        printf("%d",a+b);
        break;
        case '-':
        printf("%d",a-b);
        break;
        case '*':
        printf("%d",a*b);
        break;
        case '/':
        if(b!=0)
        {
        printf("%d",a/b);
        }
        else
        {
            printf("division not allowed");
        }
        break;
        case '%':
        if(b!=0)
        {
        printf("%d",a%b);
        }
        else
        {
            printf("modulus by zero is not allowed");
        }
        break;
        default:
        printf("wrong input");
    }
    return 0;
}