#include <stdio.h>
/**
 * main - rewrite a nested for loops into do-while and while loop
 * 
 * Return: 0 on success
*/
int main(void)
{

	int i, j;

	i = 1;
	while (i <= 3)
	{
		printf("The start of iteration %d of the outer loop.\n", i);
		j = 1;
		do
		{
			printf("Iteration %d of the inner loop.\n", j);
			j++;
		} while (j <= 4);
		printf("The end of iteration %d of the outer loop.\n", i);
		i++;
	}

	/*for (i=1; i<=3; i++)
	{
		outer loop 
		printf(“The start of iteration %d of the outer loop.\n”, i);
		for (j=1; j<=4; j++) inner loop
			printf("Iteration %d of the inner loop.\n", j);
		printf(“The end of iteration %d of the outer loop.\n”, i);
	}*/

	return 0;
}