#include <stdio.h>

/**
 * main - tests a while loop
 * 
 * Return: 0 on success
*/
int main(void)
{
	int c;

	c = ' ';

	printf("Enter a character:\n(enter K to exit)\n");

	while (c != 'K')
	{
		c = getc(stdin);
		putchar(c);
	}

	printf("\nOut of the while loop. Bye!\n");

	return (0);
}