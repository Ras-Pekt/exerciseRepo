#include "main.h"

/**
 * _myconverter - calls the appropriate conversion function at runtime
 * @input: user selection input
 * @value: value to be converted
 * Return: void on success
 */
void _myconverter(int input, double value)
{
	int i = 0;
	double result = 0.0;

	conv_t myConv[] = {
		{1, "°Celsius", "°Fahrenheit", _cel2fahr},
		{2, "°Fahrenheit", "°Celsius", _fahr2cel},
		{3, "Inches", "Centimeters", _inch2cm},
		{4, "Centimeters", "Inches", _cm2inch},
		{5, "Kilograms", "Pounds", _kg2pound},
		{6, "Pounds", "Kilograms", _pound2kg},
		{7, "Liters", "Quarts", _lts2qrt},
		{8, "Quarts", "Liters", _qrt2lts}
	};

	while (i < 8)
	{
		if (myConv[i].n == input)
		{
			if ((result = myConv[i].func(value)) == -1)
				break;
			printf("%.02f %s = %.02f %s\n", value, myConv[i].s1, result, myConv[i].s2);
			break;
		}

		i++;
	}
}
/**
 * _inputHelper - gets and validates user input
 * @input: user selection input
 * @value: value to be converted
 * Return: void on success
 */
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
