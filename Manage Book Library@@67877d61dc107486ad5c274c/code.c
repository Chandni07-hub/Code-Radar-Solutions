#include <stdio.h>

struct Book {
    char title[100];
    char author[100];
    float price;
};

int main() {
    int n;
    float threshold;

    // Input number of books
    scanf("%d", &n);

    struct Book b[n];

    // Input book details
    for (int i = 0; i < n; i++) {
        scanf("%s %s %f", b[i].title, b[i].author, &b[i].price);
    }

    // Input price threshold
    scanf("%f", &threshold);

    // Display books above threshold
    printf("Books above price %.2f:\n", threshold);
    for (int i = 0; i < n; i++) {
        if (b[i].price > threshold) {
            printf("Title: %s, Author: %s, Price: %.2f\n", b[i].title, b[i].author, b[i].price);
        }
    }

    return 0;
}