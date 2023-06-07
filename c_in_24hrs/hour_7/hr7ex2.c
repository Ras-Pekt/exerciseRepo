#include<stdio.h>
/**
 * main - tests a for loop
 * 
 * Return: 0 on success
*/
int main(void)
{
	int i, j;

	for (i=0, j=1; i<8; i++, j++)
		printf("%d + %d = %d\n", i, j, i+j);
	
	/* This code throws an error 
	   because of the ; at the end of the for statement */
	/*for (i=0, j=1; i<8; i++, j++);
		printf("%d + %d = %d\n", i, j, i+j);*/
	
	return (0);
}