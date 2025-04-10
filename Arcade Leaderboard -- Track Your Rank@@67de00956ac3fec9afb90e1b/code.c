#include <stdio.h>

// Function to determine ranks efficiently
void trackPlayerRanks(int ranked[], int n, int player[], int m, int result[]) {
    int ranks[n], rank = 1;

    // Assign ranks to leaderboard scores (Dense Ranking)
    ranks[0] = rank;
    for (int i = 1; i < n; i++) {
        if (ranked[i] == ranked[i - 1])
            ranks[i] = rank; // Same rank for duplicate scores
        else
            ranks[i] = ++rank; // Increment rank when score changes
    }

    // Determine rank of new scores using reverse traversal
    int pos = n - 1;
    for (int i = 0; i < m; i++) {
        while (pos >= 0 && player[i] >= ranked[pos])
            pos--;

        result[i] = (pos == -1) ? 1 : ranks[pos] + 1;
    }
}

int main() {
    int n, m;
    scanf("%d", &n);
    int ranked[n];
    for (int i = 0; i < n; i++) scanf("%d", &ranked[i]);

    scanf("%d", &m);
    int player[m];
    for (int i = 0; i < m; i++) scanf("%d", &player[i]);

    int result[m];
    trackPlayerRanks(ranked, n, player, m, result);

    for (int i = 0; i < m; i++) printf("%d\n", result[i]);

    return 0;
}