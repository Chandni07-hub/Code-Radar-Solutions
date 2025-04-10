#include <stdio.h>
#include <stdlib.h>

// Comparison function for sorting
int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

// Function to find the pair with the smallest difference
void findSmallestDifference(int arr[], int n) {
    // Sort the array to make comparisons easier
    qsort(arr, n, sizeof(int), compare);

    int minDiff = __INT_MAX__;
    int num1 = 0, num2 = 0;

    // Traverse the sorted array to find the closest pair
    for (int i = 0; i < n - 1; i++) {
        int diff = arr[i + 1] - arr[i];
        if (diff < minDiff) {
            minDiff = diff;
            num1 = arr[i];
            num2 = arr[i + 1];
        }
    }

    // Output the pair in ascending order
    printf("%d %d\n", num1, num2);
}

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    findSmallestDifference(arr, n);
    return 0;
}