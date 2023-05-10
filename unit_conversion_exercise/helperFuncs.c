#include "main.h"

void _myconverter(int input, double value)
{
	int i = 0;
	double result = 0.0;

	conv_t myConv[] = {
		{1, _cel2fahr},
		{2, _fahr2cel},
		{3, _inch2cm},
		{4, _cm2inch},
		{5, _kg2pound},
		{6, _pound2kg},
		{7, _lts2qrt},
		{8, _qrt2lts}
	};

	while (i < 8)
	{
		if (myConv[i].n == input)
		{
			result = myConv[i].func(value);
			printf("Converted value %.02f = %.02f\n", value, result);
			break;
		}

		i++;
	}
}

void _inputHelper(int input, double value)
{
	if (scanf("%d", &input) == 0)
	{
		printf("Please enter a valid option!\n");
		return;
	}
	else if (input == 0)
	{
		exit(EXIT_SUCCESS);
	}
	else if (input < 0 || input > 8)
	{
		printf("Please enter a Number between 1 and 8!\n");
		return;
	}

	printf("Enter value to be converted: ");

	if (scanf("%lf", &value) == 0)
	{
		printf("Please enter a valid value!\n");
		return;
	}

	_myconverter(input, value);
}
