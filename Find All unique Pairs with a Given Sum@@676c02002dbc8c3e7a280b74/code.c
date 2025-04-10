#include <stdio.h>
int main() {
    int n, target;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    scanf("%d", &target);

    // Store printed pairs manually
    int printed[100][2]; // Assuming max 100 unique pairs
    int printedCount = 0;

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == target) {
                // Check if this pair was already printed
                int alreadyPrinted = 0;
                for (int k = 0; k < printedCount; k++) {
                    int a = printed[k][0];
                    int b = printed[k][1];
                    if ((a == arr[i] && b == arr[j]) || (a == arr[j] && b == arr[i])) {
                        alreadyPrinted = 1;
                        break;
                    }
                }
                // If not, print and store it
                if (!alreadyPrinted) {
                    printf("%d %d\n", arr[i], arr[j]);
                    printed[printedCount][0] = arr[i];
                    printed[printedCount][1] = arr[j];
                    printedCount++;
                }
            }
        }
    }
    return 0;
}