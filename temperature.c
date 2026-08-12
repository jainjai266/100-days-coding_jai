//Write a program to convert temperature from Celsius to Fahrenheit.
#include<stdio.h>
int main()
{
float celsius;
printf("enter temperature in celsius\n");
scanf("%f",&celsius);
printf("temperature in celsius is %f\n",celsius);
float fahrenheit=(celsius*1.8)+32;
printf("temperature in fahrenheit is %f\n",fahrenheit);
return 0;
}