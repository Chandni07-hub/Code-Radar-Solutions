#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n); // Read array size

    int arr[n];
    // Read array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int maxRight = -1;

    // Traverse from right to left
    for (int i = n - 1; i >= 0; i--) {
        int temp = arr[i];
        arr[i] = maxRight;
        if (temp > maxRight) {
            maxRight = temp;
        }
    }

    // Print modified array
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}