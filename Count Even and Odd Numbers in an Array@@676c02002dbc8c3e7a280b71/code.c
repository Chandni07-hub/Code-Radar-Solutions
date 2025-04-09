#include <stdio.h>

int main() {
    int N, K;

    // Read size of array
    scanf("%d", &N);

    int arr[N];
    
    // Read array elements
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    // Read number of steps to rotate
    scanf("%d", &K);

    // Make sure K is within the bounds
    K = K % N;

    // Create a new array to store the rotated result
    int rotated[N];

    // Copy last K elements to the beginning
    for (int i = 0; i < K; i++) {
        rotated[i] = arr[N - K + i];
    }

    // Copy the remaining elements
    for (int i = 0; i < N - K; i++) {
        rotated[K + i] = arr[i];
    }

    // Print the rotated array
    for (int i = 0; i < N; i++) {
        printf("%d ", rotated[i]);
    }

    return 0;
}
