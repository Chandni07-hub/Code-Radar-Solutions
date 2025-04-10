#include <stdio.h>

// Function to compute ranking positions
void findRank(int scores[], int n, int newScores[], int m) {
    int ranks[n], rank = 1;

    // Assign ranks to sorted leaderboard scores
    ranks[0] = rank;
    for (int i = 1; i < n; i++) {
        if (scores[i] == scores[i - 1])
            ranks[i] = rank;  // Same rank for equal scores
        else
            ranks[i] = ++rank; // Increment rank when score changes
    }

    // Determine rank of new scores
    for (int i = 0; i < m; i++) {
        int pos = n;
        while (pos > 0 && newScores[i] >= scores[pos - 1])
            pos--;

        printf("%d\n", pos == n ? rank + 1 : ranks[pos]);
    }
}

int main() {
    // Sample Test Case 1
    int scores1[] = {100, 100, 50, 40, 40, 20, 10};
    int newScores1[] = {5, 25, 50, 120};
    int n1 = sizeof(scores1) / sizeof(scores1[0]);
    int m1 = sizeof(newScores1) / sizeof(newScores1[0]);

    printf("Output for Test Case 1:\n");
    findRank(scores1, n1, newScores1, m1);

    // Sample Test Case 2
    int scores2[] = {100, 90, 80, 75, 60};
    int newScores2[] = {50, 65, 77, 90};
    int n2 = sizeof(scores2) / sizeof(scores2[0]);
    int m2 = sizeof(newScores2) / sizeof(newScores2[0]);

    printf("\nOutput for Test Case 2:\n");
    findRank(scores2, n2, newScores2, m2);

    return 0;
}