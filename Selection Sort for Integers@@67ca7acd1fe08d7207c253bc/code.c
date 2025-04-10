#include <stdio.h>

// Function to perform selection sort
void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        // Swap the elements
        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
}

// Function to print the sorted array
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d", arr[i]);
        if (i != n - 1) {
            printf(" ");
        }
    }
    printf("\n");
}

int main() {
    int n;

    // Read the number of integers
    scanf("%d", &n);
    int arr[n];

    // Read the integers from input
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Sort the array
    selectionSort(arr, n);

    // Print the sorted array
    printArray(arr, n);

    return 0;
}
