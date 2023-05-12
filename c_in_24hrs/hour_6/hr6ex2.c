#include <stdio.h>

/**
 * main - evaluates the return value of comparison operator
 * Return: o 0 on success
 */
int main(void)
{
	int x, y, z;

	x = 3;
	y = 6;
	z = x * y == 18;

	printf("Given x = 3 and y = 6\n");
	printf("The value of z after the statement z = x * y == 18 is %d\n", z);

	return(0);

}
