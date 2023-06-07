# HOUR_7
This directory contains solutions to the coding questions of **Hour 7, Working with Loops**, of **Sam's Teach Yourself C in 24 Hours**. The questions are as follows:

- [Exer_2](hr7ex2.c) - Write a program that contains the two pieces of code shown below,
```
	for (i=0, j=1; i<8; i++, j++)
		printf(“%d + %d = %d\n”, i, j, i+j);
	for (i=0, j=1; i<8; i++, j++);
		printf(“%d + %d = %d\n”, i, j, i+j);
```
and then execute the program. What are you going to see on the screen?

- [Exer_3](hr7ex3.c) - Rewrite the program below. This time, you want the while statement to
keep looping until the user enters the character K.
```
int main()
{
	int c;

	c = ‘ ‘;

	printf(“Enter a character:\n(enter x to exit)\n”);

	while (c != ‘x’)
	{
		c = getc(stdin);
		putchar(c);
	}

	printf(“\nOut of the while loop. Bye!\n”);

	return 0;
}
```
- [Exer_4](hr7ex4.c) - Rewrite the program below by replacing the do-while loop with a for loop
```
main()
{

	int i;

	i = 65;

	do {

		printf(“The numeric value of %c is %d.\n”, i, i);

		i++;

	} while (i<72);

	return 0;
}
```
- [Exer_5](hr7ex5.c) - Rewrite the program below. This time, use a while loop as the outer loop, and a do-while loop as the inner loop
```
main()
{

	int i, j;


	for (i=1; i<=3; i++)
	{
		/* outer loop */
		printf(“The start of iteration %d of the outer loop.\n”, i);
		for (j=1; j<=4; j++) /* inner loop */
			printf("Iteration %d of the inner loop.\n", j);
		printf(“The end of iteration %d of the outer loop.\n”, i);
	}

	return 0;
}
```