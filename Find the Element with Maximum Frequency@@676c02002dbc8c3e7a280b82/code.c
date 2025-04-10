#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n], freq[1001] = {0};  // Assuming values are <= 1000

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        freq[arr[i]]++;
    }

    int maxFreq = 0, result = 1001;

    for (int i = 0; i < 1001; i++) {
        if (freq[i] > maxFreq) {
            maxFreq = freq[i];
            result = i;
        } else if (freq[i] == maxFreq && i < result) {
            result = i;
        }
    }

    printf("%d", result);
    return 0;
}
