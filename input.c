#include <stdio.h> 

int main(void) {
	int age;
	char string[10] = "Years old";
	printf("Please enter your age\n");
	scanf("%d", &age);
	printf("You are: %d %s\n", age, string);
	return 0;
}

