#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int scores[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &scores[i]);
    }

    int max_score = scores[0], min_score = scores[0];
    int max_breaks = 0, min_breaks = 0;

    for (int i = 1; i < n; i++) {
        if (scores[i] > max_score) {
            max_score = scores[i];
            max_breaks++;
        } 
        if (scores[i] < min_score) {
            min_score = scores[i];
            min_breaks++;
        }
    }

    printf("%d %d\n", max_breaks, min_breaks);
    return 0;
}