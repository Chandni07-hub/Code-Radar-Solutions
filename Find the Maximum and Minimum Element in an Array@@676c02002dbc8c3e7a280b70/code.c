#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
}

void find_max_min(int arr[], int n, int *max, int *min) {
    *max = *min = arr[0];
    for(int i = 1; i < n; i++) {
        if(arr[i] > *max) {
            *max = arr[i];
        }
        if(arr[i] < *min) {
            *min = arr[i];
        }
    }
}
    int arr[n];
    
    // Read array elements from user
    printf("Enter the elements of the array:\n");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    int max, min;
    find_max_min(arr, n, &max, &min);
    
    // Output the maximum and minimum elements
    printf("Maximum element: %d\n", max);
    printf("Minimum element: %d\n", min);
    
    return 0;
}
