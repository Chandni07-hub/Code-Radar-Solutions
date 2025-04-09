#include <stdio.h>
struct Rectangle {
    float length;
    float breadth;
};
int main() {
    int n;
    scanf("%d", &n);
    struct Rectangle r[n];
    // Input dimensions for each rectangle
    for (int i = 0; i < n; i++) {
        scanf("%f", &r[i].length);
        scanf("%f", &r[i].breadth);
    }
    // Display area and perimeter
    for (int i = 0; i < n; i++) {
        float area = r[i].length * r[i].breadth;
        float perimeter = 2 * (r[i].length + r[i].breadth);
        printf("Rectangle %d: ", i + 1);
        printf("Area = %.2f, ", area);
        printf("Perimeter = %.2f\n", perimeter);
    }
    return 0;
}