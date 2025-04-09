#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);  // Read the size of the array
    int arr[n];
    int count[100000] = {0}; // Assuming elements are within a large enough range
    int firstRepeating = -1;
    // Read array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    // Find the first repeating element
    for (int i = 0; i < n; i++) {
        count[arr[i]]++;
        if (count[arr[i]] == 2) {
            firstRepeating = arr[i];
            break;
        }
    }
    printf("%d\n", firstRepeating == -1 ? -1 : firstRepeating);
    return 0;
}