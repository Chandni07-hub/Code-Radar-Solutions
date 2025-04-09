#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];

    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int minDiff = abs(arr[1] - arr[0]);
    int first = arr[0], second = arr[1];

    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            int diff = abs(arr[i] - arr[j]);
            if(diff < minDiff || 
              (diff == minDiff && i < n && j < n)) {
                minDiff = diff;
                first = arr[i];
                second = arr[j];
            }
        }
    }

    if(first > second) {
        int temp = first;
        first = second;
        second = temp;
    }

    printf("%d %d\n", first, second);
    return 0;
}
