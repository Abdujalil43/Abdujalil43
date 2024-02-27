#include <stdio.h>

// #define PI 3.14

typedef struct {
	int point;
	int angle;
} Rectangle;

int add_two(int a, int b) {
	return a + b;
}

int main() {
	printf("Hello, World!\n");
	int a, b;
	scanf("%d %d", &a, &b);
	printf("The sum of two numbers are \n", add_two(a, b));
	return 0;
}
