#include <stdio.h>
#include <string.h>
struct Subscription {
    char userName[50];
    char subType[20]; // Basic, Standard, Premium
    float cost;
};

int main() {
    int n;
    scanf("%d", &n);
    struct Subscription users[n];
    float basicRevenue = 0, standardRevenue = 0, premiumRevenue = 0;
    int basicCount = 0, standardCount = 0, premiumCount = 0;

    for (int i = 0; i < n; i++) {
        scanf("%s %s %f", users[i].userName, users[i].subType, &users[i].cost);

        if (strcmp(users[i].subType, "Basic") == 0) {
            basicRevenue += users[i].cost;
            basicCount++;
        } else if (strcmp(users[i].subType, "Standard") == 0) {
            standardRevenue += users[i].cost;
            standardCount++;
        } else if (strcmp(users[i].subType, "Premium") == 0) {
            premiumRevenue += users[i].cost;
            premiumCount++;
        }
    }
    printf("Basic: %d Users, Revenue: %.2f; ", basicCount, basicRevenue);
    printf("Standard: %d Users, Revenue: %.2f; ", standardCount, standardRevenue);
    printf("Premium: %d Users, Revenue: %.2f\n", premiumCount, premiumRevenue);
    return 0;
}