#include <stdio.h>

int main()
{
    int n, i;
    int numerator = 2, denominator = 3;
    float sum = 0;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        sum = sum + (float)numerator / denominator;
        numerator += 2;
        denominator += 4;
    }

    printf("Sum of the series = %.2f\n", sum);

    return 0;
}