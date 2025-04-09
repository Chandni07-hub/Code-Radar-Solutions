#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n); // Read the size of the array
    int arr[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]); // Read array elements
    }
    int increasing = 1, decreasing = 1;
    // Check if array is monotonic
    for(int i = 1; i < n; i++) {
        if(arr[i] < arr[i - 1]) {
            increasing = 0;
        }
        if(arr[i] > arr[i - 1]) {
            decreasing = 0;
        }
    }
    if(increasing || decreasing) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
    return 0;
}