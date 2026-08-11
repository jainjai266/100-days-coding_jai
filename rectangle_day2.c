#include<stdio.h>
int main()
{
    int length;
    printf("enter length");
    scanf("%d",&length);
    printf("length is %d",length);
    int breadth;
    printf("enter breadth");
    scanf("%d",&breadth);
    printf("breadth is %d",breadth);
    int area;
    area=length*breadth;
    printf("area is %d",area);
    int perimeter;
    perimeter=2*(length+breadth);
printf("perimeter is %d",perimeter);
return 0;
}