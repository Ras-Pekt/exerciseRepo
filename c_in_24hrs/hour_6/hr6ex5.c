#include <stdio.h>
main()
{
	int x, y;

	x = y = 0;

	printf("The comparison result is: %d\n", x = y);

	return 0;
}
/**
 * running the program as is results in the following error message:
 * hr6ex5.c:2:1: warning: return type defaults to ‘int’ [-Wimplicit-int]
 *   2 | main()
 * To fix the code, I have to explicitly specify the return type of the main function
 */
