main()
{
	int ch;

	ch = getchar();
	putchar(ch);

	return 0;
}

/**
 * Running the code as is results in the following errors/warnings:
 * warning: return type defaults to ‘int’ [-Wimplicit-int]
 * warning: implicit declaration of function ‘getchar’ [-Wimplicit-function-declaration]
 * warning: implicit declaration of function ‘putchar’ [-Wimplicit-function-declaration]
 *
 * To fix the code, main's return value has to be include
 * and the header file, #include <stdio.h> has to be include
 */
