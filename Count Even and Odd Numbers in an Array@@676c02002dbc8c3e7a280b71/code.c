#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int evenCount = 0, oddCount = 0, number;

    for (int i = 0; i < n; i++) {
        scanf("%d", &number);

        if (number % 2 == 0)
            evenCount++;
        else
            oddCount++;
    }

    printf("%d %d", evenCount, oddCount);

    return 0;
}
