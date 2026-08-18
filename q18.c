//Write a program that accepts a percentage (0-100) and assigns a grade based on the following criteria:
#include<stdio.h>
int main()
{
    float percentage;
    printf("enter the percentage\n");
    scanf("%f",&percentage);
    if(percentage>=90&&percentage<=100)
    {
    printf("grade A");
    }
    else if(percentage>=80&&percentage<=89)
    {
    printf("grade B");
    }
    else if(percentage>=70&&percentage<=79)
    {
        printf("grade C");
    }
    else if(percentage>=60&&percentage<=69)
    {
        printf("grade D");
    }
    else
    {
        printf("grade F");
    }
    return 0;
}