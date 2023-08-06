#include <stdio.h>
/**
 * main - use bitwise operator ~
 * 
 * Return: 0 on succes
*/
int main(void)
{
	int x = 0xEFFF, y = 0x1000;

	printf("x compliment: %X\ny compliment: %X\n", ~x, ~y);

	return (0);
}