#include <stdio.h>
int main() {
    int n, k;
    scanf("%d %d", &n, &k);
    int arr[n];
    int count = 0;
    // Read array elements and count those greater than k
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if(arr[i] > k) {
            count++;
        }
    }
    // Output the result
    printf("%d\n", count);
    return 0;
}
