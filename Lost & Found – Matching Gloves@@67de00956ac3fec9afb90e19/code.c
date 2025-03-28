#include <stdio.h>

int countGlovePairs(int gloves[], int n) {
    int freq[101] = {0}; // Assuming glove color IDs are between 1 and 100
    int pairs = 0;

    // Count frequency of each glove color
    for (int i = 0; i < n; i++) {
        freq[gloves[i]]++;
    }

    // Count pairs
    for (int i = 0; i < 101; i++) {
        pairs += freq[i] / 2; // Each pair consists of 2 gloves
    }

    return pairs;
}

int main() {
    int n;
    scanf("%d", &n);

    int gloves[1000];

    for (int i = 0; i < n; i++) {
        scanf("%d", &gloves[i]);
    }

    int pairs = countGlovePairs(gloves, n);
    printf("%d\n", pairs);

    return 0;
}