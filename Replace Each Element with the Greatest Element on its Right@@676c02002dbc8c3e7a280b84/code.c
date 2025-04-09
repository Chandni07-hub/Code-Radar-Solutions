#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);  // Size of array

    int arr[n];
    int freq[10001] = {0};  // Frequency array
    int maxFreq = 0;
    int result = 10001;  // Large number to start with

    // Read elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        freq[arr[i]]++;
    }

    // Find element with max frequency (and smallest value if tie)
    for (int i = 0; i < 10001; i++) {
        if (freq[i] > maxFreq) {
            maxFreq = freq[i];
            result = i;
        } else if (freq[i] == maxFreq && i < result) {
            result = i;
        }
    }

    printf("%d\n", result);
    return 0;
}