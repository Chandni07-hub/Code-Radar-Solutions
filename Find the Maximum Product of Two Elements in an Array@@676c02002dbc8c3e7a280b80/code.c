#include <stdio.h>
#include <limits.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    // Initialize variables for top 2 max and min values
    int max1 = INT_MIN, max2 = INT_MIN;
    int min1 = INT_MAX, min2 = INT_MAX;

    for (int i = 0; i < n; i++) {
        int val = arr[i];

        // Update max1 and max2
        if (val > max1) {
            max2 = max1;
            max1 = val;
        } else if (val > max2) {
            max2 = val;
        }

        // Update min1 and min2
        if (val < min1) {
            min2 = min1;
            min1 = val;
        } else if (val < min2) {
            min2 = val;
        }
    }
    int product1 = max1 * max2;
    int product2 = min1 * min2;
    // Print the maximum of the two products
    printf("%d\n", product1 > product2 ? product1 : product2);

    return 0;
}