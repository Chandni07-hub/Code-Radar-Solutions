#include <stdio.h>
#include <stdbool.h>

// Function to find the smallest missing positive integer
int findMissingPositive(int arr[], int n) {
    // Array to mark presence of numbers from 1 to n
    bool present[n + 1];
    
    // Initialize all entries as false (not present)
    for (int i = 0; i <= n; i++) {
        present[i] = false;
    }

    // Mark the numbers that are present in the array
    for (int i = 0; i < n; i++) {
        if (arr[i] > 0 && arr[i] <= n) {
            present[arr[i]] = true;
        }
    }

    // Find the first number from 1 to n that is missing
    for (int i = 1; i <= n; i++) {
        if (!present[i]) {
            return i;
        }
    }

    // If all numbers from 1 to n are present, return n + 1
    return n + 1;
}

int main() {
    int n;
    
    // Input the size of the array
    scanf("%d", &n);

    int arr[1000];  // Define a large enough array

    // Input the array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Find and print the result
    int result = findMissingPositive(arr, n);
    printf("%d\n", result);

    return 0;
}
