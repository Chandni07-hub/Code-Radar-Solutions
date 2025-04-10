#include <stdio.h>

int main trackScores(int scores[], int n, int result[]) {
    int maxScore = scores[0];
    int minScore = scores[0];
    int maxBreaks = 0;
    int minBreaks = 0;

    for (int i = 1; i < n; i++) {
        if (scores[i] > maxScore) {
            maxScore = scores[i];
            maxBreaks++;
        } else if (scores[i] < minScore) {
            minScore = scores[i];
            minBreaks++;
        }
    }

    result[0] = maxBreaks;
    result[1] = minBreaks;
}

int main() {
    int n;
    scanf("%d", &n);

    int scores[1000];

    for (int i = 0; i < n; i++) {
        scanf("%d", &scores[i]);
    }

    int result[2];

    // Call trackScores function
    trackScores(scores, n, result);

    // Output results: highest and lowest record breaks
    printf("%d %d\n", result[0], result[1]);

    return 0;
}
