#include <stdio.h>
#include <stdlib.h>

// Comparison function for qsort
int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int main() {
    int n;
    scanf("%d", &n);
    
    int arr[n];

    // Reading the array
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Sort the array
    qsort(arr, n, sizeof(int), compare);

    // Calculate median
    int median;
    if(n % 2 == 1) {
        median = arr[n / 2];  // For odd n
    } else {
        median = (arr[n / 2 - 1] + arr[n / 2]) / 2;  // For even n
    }

    printf("%d\n", median);
    return 0;
}
