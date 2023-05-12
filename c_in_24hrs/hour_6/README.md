# HOUR_6
This directory contains solutions to the coding questions of **Hour 6, Manipulating Data**, of **Sam's Teach Yourself C in 24 Hours**. The questions are as follows:

- [Exer_1](hr6ex1.c) - Given x = 1 and y = 3, write a program to print out the results of these expressions:
	`x += y, x += -y, x -= y, x -= -y, x *= y, and x *= -y.`
- [Exer_2](hr6ex2.c) - Given x = 3 and y = 6, what is the value of z after the statement:
	`z = x * y == 18;`
is executed?
- [Exer_3](hr6ex3.c) - Write a program that initializes the integer variable x with 1 and outputs results with the following two statements:
	```
	printf(“x++ produces: %d\n”, x++);
	printf(“Now x contains: %d\n”, x);
	```
- [Exer_4](hr6ex4.c) - Rewrite the program you wrote in exercise 3. This time, include the following two statements:
	```
	printf(“x = x++ produces: %d\n”, x = x++);
	printf(“Now x contains: %d\n”, x);
	```
- [Exer_5](hr6ex5.c) - The following program is supposed to compare the two variables, x and y, for equality. What’s wrong with the program? (Hint: Run the program to see what it prints out.)
	```
	#include <stdio.h>
	main()
	{
	int x, y;
	x = y = 0;
	printf(“The comparison result is: %d\n”, x = y);
	return 0;
	}
	```
	
**NOTE: Some of the code is intentionally wrong, to find out common coding mistakes, learn to interpret error messages and practice debugging code from such error messages**
