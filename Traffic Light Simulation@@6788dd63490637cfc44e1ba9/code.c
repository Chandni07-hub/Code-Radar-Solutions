#include <stdio.h>
int main() {
    char R,G,Y;
    scanf("%c",&R);
    scanf("%c",&G);
    scanf("%c",&Y);
    if (R == 'R') {
        printf("Stop\n");
    } 
    else if (G == 'G') {
        printf("Go\n");
    } 
    else if (Y == 'Y') {
        printf("Slow Down\n");
    } 
    else {
        printf("Invalid input");
    }
    return 0;
}