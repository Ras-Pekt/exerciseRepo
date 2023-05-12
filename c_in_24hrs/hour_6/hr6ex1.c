#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 on success
 */
int main(void)
{
	int x = 1, y = 3;

	printf("Given x = 1 and y = 3\n");
	printf("x += y = %d\n", x += y);x = 1, y = 3; // reset x and y
	printf("x += -y = %d\n", x += -y);x = 1, y = 3; // reset x and y
	printf("x -= y = %d\n", x -= y);x = 1, y = 3; // reset x and y
	printf("x -= -y = %d\n", x -= -y);x = 1, y = 3; // reset x and y
	printf("x *= y = %d\n", x *= y);x = 1, y = 3; // reset x and y
	printf("x *= -y = %d\n", x *= -y);x = 1, y = 3; // reset x and y

	return(0);
}
