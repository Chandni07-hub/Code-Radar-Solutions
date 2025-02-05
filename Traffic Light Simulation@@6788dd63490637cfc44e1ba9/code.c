#include <stdio.h>
int main() {
    char R,G,Y;
    scanf("%c",&char);
    
    if (R == 'R') {
        printf("Stop");
    } 
    else if (G == 'G') {
        printf("Go");
    } 
    else if (Y == 'Y') {
        printf("Slow Down");
    } 
    else {
        printf("Invalid input");
    }
    return 0;
}