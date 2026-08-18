#include <stdio.h>

int main(void) {

	int x = 5;
	printf("x = %d\n", x);
	x += 3;
	printf("x + 3 = %d\n", x);
	x -= 2;
	printf("x - 2= %d\n", x);
	x ++;
	printf("x ++: %d\n", x);
	x--;
	printf("x --: %d\n", x);
	printf("x == 6 %d\n", x == 6);
	printf("x > 5 %d\n", x > 5);
	printf("x < 5 %d\n", x < 5);

	return 0;

}

