#include<stdio.h>
int main()
{
    int radius;
    printf("enter radius\n");
    scanf("%d",&radius);
    printf("radius is %d\n",radius);
    float area;
    area=3.14*radius*radius;
    printf("area is %f\n",area);
    float circumference;
    circumference=2*3.14*radius;
    printf("circumference is %f\n",circumference);
    return 0;
}