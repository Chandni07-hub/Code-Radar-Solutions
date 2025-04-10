#include <stdio.h>
int main() {
    int N;
    scanf("%d", &N);
    int arr[N];
    int freq[N];  // size N is enough since numbers are in 1 to N-1
    // Initialize frequency array with 0
    for(int i = 0; i < N; i++) {
        freq[i] = 0;
    }
    // Read the array
    for(int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }
    // Find duplicate
    for(int i = 0; i < N; i++) {
        if(freq[arr[i]] == 1) {
            printf("%d\n", arr[i]);
            break;
        }
        freq[arr[i]] = 1;
    }
    return 0;
}
