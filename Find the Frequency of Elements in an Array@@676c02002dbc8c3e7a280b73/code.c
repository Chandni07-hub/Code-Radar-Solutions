#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);  // Read number of elements

    int arr[n];
    int printed[n];  // To track if an element has been printed already

    // Initialize printed array to 0
    for (int i = 0; i < n; i++) {
        printed[i] = 0;
    }

    // Read array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Count and print frequencies of unique elements
    for (int i = 0; i < n; i++) {
        if (printed[i])
            continue;

        int count = 1;
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
                printed[j] = 1; // Mark duplicate as printed
            }
        }

        printf("%d %d\n", arr[i], count);
    }

    return 0;
}
