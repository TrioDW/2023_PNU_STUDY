#include <stdio.h>

int DecToBin(int x) {

	int binary = 0;
    int position = 1;

    while (x > 0) {
        int remainder = x % 2;
        binary += position * remainder;
        x /= 2;
        position *= 10;
    }
    return binary;
}

int main() {
	
	int ip[4];
	int newIP[4];
	scanf("%d.%d.%d.%d", &ip[0], &ip[1], &ip[2], &ip[3]);

	for (int i = 0; i < 4; i++) {
	    int tmp = DecToBin(ip[i]);
		printf("%08d", tmp);
		if (i != 3) {
			printf(".");
		}
	}
	
	return 0;
}
