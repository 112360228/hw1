#include <stdio.h>
#include <math.h>

void drawSquare(int size) {
	int n = 10; // 正方形的边长

	// 打印正方形的上边框
	for (int i = 0; i < n; i++) {
		printf("*");
	}
	printf("\n");

	// 打印正方形的中间部分
	for (int i = 0; i < n - 2; i++) {
		printf("*");
		for (int j = 0; j < n - 2; j++) {
			printf(" ");
		}
		printf("*\n");
	}

	// 打印正方形的下边框
	for (int i = 0; i < n; i++) {
		printf("*");
	}
	printf("\n");
}

void drawCircle(int diameter) {
	printf("  ***  \n");
	printf(" *   * \n");
	printf("*     *\n");
	printf("*     *\n");
	printf("*     *\n");
	printf("*     *\n");
	printf("*     *\n");
	printf(" *   * \n");
	printf("  ***  \n");

}

void drawArrow(int top, int bottom) {
	int upperHeight = 3; // 上半部分高度为3
	int lowerHeight = 7; // 下半部分高度为7
	int i, j;

	// 输出箭头的上半部分
	for (i = 1; i <= upperHeight; i++) {
		for (j = 1; j <= upperHeight - i; j++) {
			printf(" ");
		}
		for (j = 1; j <= 2 * i - 1; j++) {
			printf("*");
		}
		printf("\n");
	}

	// 输出箭头的下半部分
	for (i = 1; i <= lowerHeight; i++) {
		for (j = 1; j <= upperHeight - 1; j++) {
			printf(" ");
		}
		printf("*\n");
	}

}

void drawdiamond(int diameter) {
	int n = 5; // 斜边长为5

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n - i; j++) {
			printf(" ");
		}

		for (int j = 1; j <= 2 * i - 1; j++) {
			if (j == 1 || j == 2 * i - 1) {
				printf("*");
			}
			else {
				printf(" ");
			}
		}

		printf("\n");
	}

	for (int i = n - 1; i >= 1; i--) {
		for (int j = 1; j <= n - i; j++) {
			printf(" ");
		}

		for (int j = 1; j <= 2 * i - 1; j++) {
			if (j == 1 || j == 2 * i - 1) {
				printf("*");
			}
			else {
				printf(" ");
			}
		}

		printf("\n");
	}



}

int main() {
	//printf("空心正方形（10x10）：\n");
	drawSquare(10);

	//printf("\n空心圆（直径5）：\n");
	drawCircle(5);

	//printf("\n箭头：\n");
	drawArrow(3, 7);

	drawdiamond(5);

	return 0;
}