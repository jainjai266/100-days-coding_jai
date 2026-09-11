#include <stdio.h>

int main()
{
    int n, element;

    scanf("%d", &n);

    int arr[n + 1];

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &element);

    int i = n - 1;

    while(i >= 0 && arr[i] > element)
    {
        arr[i + 1] = arr[i];
        i--;
    }

    arr[i + 1] = element;
    n++;

    for(int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}