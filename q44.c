//Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.
#include <stdio.h>

int main()
{
    int n;
    float sum = 1.0;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    if (n >= 1)
    {
        int num = 3, den = 4;

        for (int i = 2; i <= n; i++)
        {
            sum = sum + (float)num / den;
            num = num + 2;
            den = den + 2;
        }
    }

    printf("Sum of the series = %.2f", sum);

    return 0;
}