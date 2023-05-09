#include <stdio.h>

/* The following function is meant to demonstrate an error related to function naming convention */
/*int 3integer_add( int x, int y, int z)
{
	int sum;
	sum = x + y + z;
	return sum;
}*/

/* The fixed function */
int _3integer_add( int x, int y, int z)
{
	int sum;
	sum = x + y + z;
	return sum;
}

int main()
{
	int sum;
	
	sum = _3integer_add(2, 3, 4);
	printf("The sum of 3 intergers is: %d\n", sum);
	return (0);
}

/* The error encounted: error: invalid suffix "integer_add" on integer constant. That is a function name (or a variable name) should not start with a number. removing the number (3) or adding an underscore before the number would fix the problem*/
