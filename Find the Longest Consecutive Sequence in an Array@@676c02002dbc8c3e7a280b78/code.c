#include <stdio.h>
#include <stdlib.h>
// Comparison function for qsort
int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}
int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    if (n == 0) {
        printf("0\n");
        return 0;
    }
    // Sort the array
    qsort(arr, n, sizeof(int), compare);
    int max_len = 1, current_len = 1;
    for (int i = 1; i < n; i++) {
        if (arr[i] == arr[i - 1]) {
            // Skip duplicates
            continue;
        } else if (arr[i] == arr[i - 1] + 1) {
            // Consecutive number
            current_len++;
        } else {
            // Reset count
            if (current_len > max_len)
                max_len = current_len;
            current_len = 1;
        }
    }
    // Final check
    if (current_len > max_len)
        max_len = current_len;
    printf("%d\n", max_len);
    return 0;
}