// Your code here...
#include <stdio.h>
#include <string.h>

struct Vehicle {
    char number[20];
    char type[10];
    float toll;
};

int main() {
    int n;
    
    scanf("%d", &n);

    struct Vehicle v[n];

    float carTotal = 0, truckTotal = 0, bikeTotal = 0;

    // Input vehicle data
    for (int i = 0; i < n; i++) {
        scanf("%s %s %f", v[i].number, v[i].type, &v[i].toll);

        if (strcmp(v[i].type, "Car") == 0) {
            carTotal += v[i].toll;
        } else if (strcmp(v[i].type, "Truck") == 0) {
            truckTotal += v[i].toll;
        } else if (strcmp(v[i].type, "Bike") == 0) {
            bikeTotal += v[i].toll;
        }
    }

    // Output totals
    printf("Cars: %.2f, Trucks: %.2f, Bikes: %.2f\n", carTotal, truckTotal, bikeTotal);

    return 0;
}