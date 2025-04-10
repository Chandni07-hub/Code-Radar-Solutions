#include <stdio.h>
int main() {
    int N;
    scanf("%d", &N);
    int arr[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }
    int max = -2147483648;
    int secondMax = -2147483648;
    for (int i = 0; i < N; i++) {
        if (arr[i] > max) {
            secondMax = max;
            max = arr[i];
        } else if (arr[i] > secondMax && arr[i] != max) {
            secondMax = arr[i];
        }
    }
    printf("%d\n", secondMax);
    return 0;
}
