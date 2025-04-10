#include <stdio.h>
int main() {
    int n, target;
    scanf("%d", &n);  // Size of the array
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);  // Reading array elements
    }
    scanf("%d", &target);  // Reading the target element
    int index = -1;  // Default to -1 (not found)
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            index = i;  // Found the target
            break;
        }
    }
    printf("%d\n", index);
    return 0;
}