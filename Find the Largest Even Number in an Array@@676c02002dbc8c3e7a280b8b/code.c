
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    int maxEven;
    int foundEven = 0;

    // Read array elements and find the largest even number
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if(arr[i] % 2 == 0) {
            if(!foundEven || arr[i] > maxEven) {
                maxEven = arr[i];
                foundEven = 1;
            }
        }
    }

    if(foundEven)
        printf("%d\n", maxEven);
    else
        printf("-1"); // or -1 based on your requirement

    return 0;
}