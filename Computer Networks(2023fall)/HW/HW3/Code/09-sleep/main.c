#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {

	printf("Going to sleep\n");
	sleep(1000);
	printf("Just woke up\n");
	return 0;
}
