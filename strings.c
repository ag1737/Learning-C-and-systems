#include <stdio.h>

int main(void) {
	char name[6] = "Hello";
	char names[6] = "World";
	printf("Hello, World.\n");
	printf("%s, %s.\n", name, names);
	printf("%c%c%c%c%c, %c%c%c%c%c.\n",name[0], name[1], name[2], name[3], name[4], names[0], names[1], names[2], names[3], names[4]);

	return 0;
}

