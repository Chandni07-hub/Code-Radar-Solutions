#include <stdio.h>
#include <stdbool.h>

int findMissingPositive(int arr[], int n) {
    bool present[n + 1]; // Track numbers from 1 to n
    for (int i = 0; i <= n; i++) {
        present[i] = false;
    }

    // Mark present numbers
    for (int i = 0; i < n; i++) {
        if (arr[i] > 0 && arr[i] <= n) {
            present[arr[i]] = true;
        }
    }

    // Find the first number that is not present
    for (int i = 1; i <= n; i++) {
        if (!present[i]) {
            return i;
        }
    }

    // If all 1 to n are present, the missing number is n+1
    return n + 1;
}

int main() {
    int n;
    scanf("%d", &n);

    int arr[1000];  // You can increase this size if needed

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int result = findMissingPositive(arr, n);
    printf("%d\n", result);

    return 0;
}
