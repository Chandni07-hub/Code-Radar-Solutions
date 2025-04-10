#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    
    int arr[N];
    int freq[N]; // to count frequency of elements
    
    // Initialize frequency array with 0
    for(int i = 0; i < N; i++) {
        freq[i] = 0;
    }

    // Read array elements
    for(int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
        freq[arr[i]]++;
    }

    // Find and print the duplicate element
    for(int i = 0; i < N; i++) {
        if(freq[arr[i]] > 1) {
            printf("%d"\n);
        }
    }
