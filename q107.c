#include <stdio.h>

int main() {
    int n;

    scanf("%d", &n);

    int arr[n];

    // Input array
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Find previous greater element
    for (int i = 0; i < n; i++) {
        int greater = -1;

        // Search towards the left
        for (int j = i - 1; j >= 0; j--) {
            if (arr[j] > arr[i]) {
                greater = arr[j];
                break;
            }
        }

        printf("%d", greater);

        if (i < n - 1) {
            printf(", ");
        }
    }

    return 0;
}