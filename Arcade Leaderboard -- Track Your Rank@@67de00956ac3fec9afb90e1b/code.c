#include <stdio.h>
#include <stdbool.h>

// Function to find the smallest missing positive integer
int findMissingPositive(int arr[], int n) {
    // Create a boolean array to track presence of numbers from 1 to n
    bool present[n + 1];
    
    // Initialize all entries as false
    for (int i = 0; i <= n; i++) {
        present[i] = false;
    }

    // Mark numbers that are present in the array
    for (int i = 0; i < n; i++) {
        if (arr[i] > 0 && arr[i] <= n) {
            present[arr[i]] = true;
        }
    }

    // Find the first number that is not marked present
    for (int i = 1; i <= n; i++) {
        if (!present[i]) {
            return i;
        }
    }

    // If all numbers 1 to n are present, return n + 1
    return n + 1;
}

int main() {
    int n;
    scanf("%d", &n); // Read array size

    int arr[1000]; // Array to hold input values

    // Read array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Call function and print result
    int result = findMissingPositive(arr, n);
    printf("%d\n", result);

    return 0;
}
