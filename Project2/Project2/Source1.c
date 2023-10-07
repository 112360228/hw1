#include <stdio.h>

int ma() {
	int radius = 5;

	for (int i = 0; i <= 2 * radius; i++) {
		for (int j = 0; j <= 2 * radius; j++) {
			int distance = (i - radius) * (i - radius) + (j - radius) * (j - radius);
			if (distance >= radius * radius - 1 && distance <= radius * radius + 1) {
				printf("*");
			}
			else {
				printf(" ");
			}
		}
		printf("\n");
	}

	return 0;
}
