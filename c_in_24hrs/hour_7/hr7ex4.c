#include <stdio.h>

/**
 * main - rewrite a do-while loop to a for loop
 * 
 * Return: 0 on success
*/
int main(void)
{

	int i;

	i = 65;

	for (; i < 72; i++)
		printf("The numeric value of %c is %d.\n", i, i);
	/*do {

		printf("The numeric value of %c is %d.\n", i, i);

		i++;

	} while (i<72);*/

	return (0);
}