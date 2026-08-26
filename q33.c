//Write a program to check if a number is an Armstrong number.
#include <stdio.h>
#include <math.h>

int main()
{
    int num, original, remainder, digits = 0;
    int sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;

    // Count the number of digits
    while (original != 0)
    {
        digits++;
        original /= 10;
    }

    original = num;

    // Calculate the sum of each digit raised to the power of digits
    while (original != 0)
    {
        remainder = original % 10;
        sum += pow(remainder, digits);
        original /= 10;
    }

    // Check if Armstrong
    if (sum == num)
    {
        printf("%d is an Armstrong number.", num);
    }
    else
    {
        printf("%d is not an Armstrong number.", num);
    }

    return 0;
}