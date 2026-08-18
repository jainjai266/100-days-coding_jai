//Write a program to find the roots of a quadratic equation and categorize them.
#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,root1,root2,d;
    printf("enter a,b,c");
    scanf("%f %f %f",&a,&b,&c);
    d=(b*b-4*a*c);
    root1=(-b+sqrt(d))/(2*a);
    root2=(-b-sqrt(d))/(2*a);
    printf("root1 is %f",root1);
    printf("root2 is %f",root2);
    if(d>0)
    {
        printf("roots are real and distinct");
    }
    else if(d==0)
    {
        printf("roots are real and same");
    }
    else
    {
        printf("roots are complex");
    }
    return 0;
}