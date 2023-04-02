#include <stdio.h>

/* Exercise 3 seeks to identify what is wrong with the followoing function code */
int integer_add( int x, int y, int z)
{
	int sum;
	/* sum = x + y + z this is the previous statement that produced the error */
	sum = x + y + z; /* Fixed code */
	return sum;
}

int main(void)
{
	int sum = integer_add(2, 5, 8);
	
	printf("The sum of 2, 5 and 8 is %d\n", sum);
	return (0);
}

/* error: expected ‘;’ before ‘return’ */

