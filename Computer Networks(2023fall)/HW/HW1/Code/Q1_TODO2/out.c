#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    srand((unsigned int)time(NULL));
 
    for (int i = 0; i < 5; ++i) {
        int num = rand();
        printf("%d\n", (int)num % 100);
    }

    return 0;
}