#include <stdio.h>
#include <stdlib.h>

// Function to find the pair with the smallest difference
void findSmallestDifference(int arr[], int n) {
    // Sort the array first (helps in finding the closest pairs easily)
    qsort(arr, n, sizeof(int), (int (*)(const void*, const void*))compar);

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

// Comparison function for qsort
int compar(const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
}

int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the array elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    findSmallestDifference(arr, n);
    return 0;
}