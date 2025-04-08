#include <stdio.h>
int main trackPlayerRanks(int ranked[], int n, int player[], int m, int result[]) {
    int denseRanks[200000], rank = 1;
    denseRanks[0] = ranked[0];
    // Create dense ranking
    for (int i = 1; i < n; i++) {
        if (ranked[i] != ranked[i - 1]) {
            denseRanks[rank++] = ranked[i];
        }
    }
    // Compare player scores with denseRanks (in descending order)
    int i = rank - 1;
    for (int j = 0; j < m; j++) {
        while (i >= 0 && player[j] >= denseRanks[i]) {
            i--;
        }
        result[j] = i + 2; // rank is index+2 because ranks are 1-based
    }
}
int main() {
    int n, m;
    scanf("%d", &n);
    int ranked[200000];
    for (int i = 0; i < n; i++) scanf("%d", &ranked[i]);
    scanf("%d", &m);
    int player[200000];
    for (int i = 0; i < m; i++) scanf("%d", &player[i]);
    int result[200000];
    trackPlayerRanks(ranked, n, player, m, result);
    for (int i = 0; i < m; i++) printf("%d\n", result[i]);
    return 0;
}