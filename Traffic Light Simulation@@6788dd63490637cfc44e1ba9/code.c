#include <stdio.h>
int main() {
    ch R,G,Y;
    scanf("%c",&ch);
    
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