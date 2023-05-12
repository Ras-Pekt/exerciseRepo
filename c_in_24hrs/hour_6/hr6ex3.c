#include <stdio.h>

/**
 * main - evaluates post increment
 * Return: 0 on success
 */
int main(void)
{
	int x = 1;

	printf("Given x = 1\n");
	printf("x++ produces: %d\n", x++);
	printf("Now x contains: %d\n", x);

	return (0);
}
