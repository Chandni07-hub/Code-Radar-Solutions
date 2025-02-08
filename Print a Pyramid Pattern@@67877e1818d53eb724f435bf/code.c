#include <stdio.h>
int main(){
    int N;
    scanf("%d",&N);
}

void printPyramid(int N) {
    for (int i = 1; i <= N; i++) {
        // Print spaces
        for (int j = i; j < N; j++) {
            printf(" ");
        }
        // Print stars
        for (int k = 1; k <= (2*i - 1); k++) {
            printf("*");
        }
        // Move to the next line
        printf("\n");
    }
}
    return 0;
