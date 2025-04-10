#include <stdio.h>
int main() {
    int n, k;
    scanf("%d", &n);          // Read size of array
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]); // Read array elements
    }
    scanf("%d", &k);          // Read number of steps to rotate
    k = k % n;                // To handle k > n
    int rotated[n];
    // Rotate the array to the right by k steps
    for (int i = 0; i < n; i++) {
        rotated[(i + k) % n] = arr[i];
    }
    // Print the rotated array
    for (int i = 0; i < n; i++) {
        printf("%d ", rotated[i]);
    }
    return 0;
}
