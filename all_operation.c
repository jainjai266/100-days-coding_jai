#include<stdio.h>

int main(){
    int a;
   printf("enter value of a");
   scanf("%d",&a);
    printf("value of a is %d\n",a);
    int b;
    printf("enter value of b");
    scanf("%d",&b);
    printf("value of b is %d\n",b);
    int sum=a+b;
    printf("sum is %d\n",sum);
    int sub=a-b;
    printf("subtraction is %d\n",sub);
    int mul=a*b;
    printf("multiplication is %d\n",mul);
    float div=a/b;
    printf("division is %f\n",div);
    return 0;
}