#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[50];
    for (int i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }
    int is_sorted = 1;
    for (int i = 0;i < n - 1;i++) {
        if (arr[i]>arr[i+1]){
            is_sorted = 0;
            break;
        }
    }
    if (is_sorted)
        printf("Sorted\n");
    else
        printf("Not Sorted\n");

    return 0;
}