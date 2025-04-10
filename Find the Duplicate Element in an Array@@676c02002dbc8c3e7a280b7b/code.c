#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    int count[n];  // Since values are from 1 to n-1, index n is not needed

    // Initialize count array
    for (int i = 0; i < n; i++)
        count[i] = 0;

    // Read input
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    // Find duplicate
    for (int i = 0; i < n; i++) {
        if (arr[i] < 1 || arr[i] >= n) {
            // Skip or report invalid number
            continue;
        }

        if (count[arr[i]] == 1) {
            printf("%d\n", arr[i]);
            return 0;
        }
        count[arr[i]]++;
    }
    // Optional: If no duplicate is found
    printf("No duplicate found\n");
    return 0;
}