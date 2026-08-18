#include <stdio.h>

int main(void) {
	float celsius;
	printf("Please enter the temperature in celsius:");
	scanf("%f", &celsius);
	float farenheit = (celsius * 9 / 5) + 32;
	printf("\nthat is %.1f degrees farenheit \n", farenheit);
	return 0;
}
