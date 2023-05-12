#include <stdio.h>

/**
 * main - prints a character (user input) to stdout
 * Return: 0 on success
 */
int main(void)
{
	char ch;

	printf("Enter a character => ");

	ch = getchar();
	putchar(ch);
	putchar('\n');
	return (0);
}
