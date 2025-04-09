#include <stdio.h>
struct Day {
    char name[20];
    float temperature;
};
int main() {
    struct Day week[7];
    float sum = 0.0, average;
    // Input: 7 days
    for (int i = 0; i < 7; i++) {
        scanf("%s %f", week[i].name, &week[i].temperature);
        sum += week[i].temperature;
    }
    // Average calculation
    average = sum / 7;
    // Output as shown in image
    printf("Average Temperature: %.2f\n", average);
    return 0;
}