#include <stdio.h>
int main() {
    int n, k;
    scanf("%d", &n);

    int arr[1000], rotated[1000];

    // Input array
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input rotation count
    scanf("%d", &k);

    // Normalize K in case it's greater than n
    k = k % n;

    // Rotate array to the right by K positions
    for (int i = 0; i < n; i++) {
        rotated[(i + k) % n] = arr[i];
    }

    // Print rotated array
    for (int i = 0; i < n; i++) {
        printf("%d\n", rotated[i]);
    }

    return 0;
}
