#include <stdio.h>

int main() {
    
    int ip[4];
    scanf("%d.%d.%d.%d", &ip[0], &ip[1], &ip[2], &ip[3]);
    
    if (ip[0] == 10 && ip[1] == 0 && ip[2] == 2) {
        printf("Send to IF0");
    } else if (ip[0] == 192 && ip[1] == 168) {
        printf("Send to IF1");
    } else {
        printf("Sent to IF2");
    }
    
    return 0;
}
