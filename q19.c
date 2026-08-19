//Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter the value of a,b,c\n");
    scanf("%d %d %d",&a,&b,&c);
    if(a==b && b==c && c==a)
    {
        printf("equilateral triangle");
    }
    else if (a!=b && b!=c && c!=a)
    {
        printf("scalene triangle");
    }
    else
    {
        printf("isosceles triangle");
    }
    return 0;
}