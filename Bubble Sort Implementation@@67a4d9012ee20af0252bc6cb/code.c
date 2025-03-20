#include <stdio.h>

// Function to perform Bubble Sort
void bubbleSort(int arr[], int n) {
    int i, j, temp;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap the elements
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// Function to print the array
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d", arr[i]); // Print digits without spaces
    }
    printf("\n");
}

int main() {
    int n, i;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];

    // Input the array elements as individual digits
    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++) {
        scanf("%1d", &arr[i]); // Read one digit at a time
    }

    // Perform Bubble Sort
    bubbleSort(arr, n);

    // Print the sorted array
    printf("The sorted array is:\n");
    printArray(arr, n);

    return 0;
}
