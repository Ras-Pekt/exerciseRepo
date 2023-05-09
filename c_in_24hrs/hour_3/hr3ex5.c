#include <stdio.h>

/* A C program that calls the C function written in Exercise 4 (hr3ex4.c) to calculate the multiplication of 3 times 5 and then print out the return value from the function on the screen. */

int integer_multi(int x, int y)
{
	int mul;
	
	mul = x * y;
	return (mul);
}

int main(void)
{
	int multi;
	
	multi = integer_multi(3, 5);
	printf("The product of 3 and 5 is %d\n", multi);
	return (0);
}
