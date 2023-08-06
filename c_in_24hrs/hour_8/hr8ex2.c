#include <stdio.h>

int main(void)
{
	int x = 0xEFFF, y = 0x1000;

	printf("!x = %d\t%u\n!y = %d\t%u\n", !x, !x, !y, !y);

	return (0);
}