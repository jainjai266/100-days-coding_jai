#include<stdio.h>
int main()
{
int x,y;
printf("enter value of x and y");
scanf("%d %d",&x,&y);
x=x+y;
y=x-y;
x=x-y;
printf(" value of x is %d",x);
printf("value of y is %d",y);
return 0;
}