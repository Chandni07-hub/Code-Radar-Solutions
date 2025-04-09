#include <stdio.h>
#include <string.h>
struct MovieTicket {
    char movieName[50];
    char ticketType[20]; // Standard, Premium, VIP
    float price;
};
int main() {
    int n;
    scanf("%d", &n);
    struct MovieTicket tickets[n];
    float standardTotal = 0, premiumTotal = 0, vipTotal = 0;
    for (int i = 0; i < n; i++) {
        scanf("%s %s %f", tickets[i].movieName, tickets[i].ticketType, &tickets[i].price);

        if (strcmp(tickets[i].ticketType, "Standard") == 0) {
            standardTotal += tickets[i].price;
        } else if (strcmp(tickets[i].ticketType, "Premium") == 0) {
            premiumTotal += tickets[i].price;
        } else if (strcmp(tickets[i].ticketType, "VIP") == 0) {
            vipTotal += tickets[i].price;
        }
    }
    printf("Standard: %.2f, Premium: %.2f, VIP: %.2f\n", standardTotal, premiumTotal, vipTotal);
    return 0;
}