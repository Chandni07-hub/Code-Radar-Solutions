#include <stdio.h>

int countGlovePairs(int gloves[], int n) {
    int freq[101] = {0}; 
    int pairs = 0;
    for (int i = 0; i < n; i++) {
        freq[gloves[i]]++;
    }
    for (int i = 0; i < 101; i++) {
        pairs += freq[i] / 2; 
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