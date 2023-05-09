#include "main.h"

double _cel2fahr(double temp)
{
	/*For C to F conversion*/
	return ((temp * 1.8) + 32);
}
double _fahr2cel(double temp)
{
	/*For F to C conversion*/
	return ((temp - 32) * 0.5556);
}
double _inch2cm(double dist)
{
	/*For inch to cm conversion*/
	return (dist * 0.3937);
}
double _cm2inch(double dist)
{
	/*For cm to inch conversion*/
	return (dist * 2.54);
}
double _kg2pound(double weight)
{
	/*For K to P conversion*/
	return (weight * 2.2046);
}
double _pound2kg(double weight)
{
	/*For P to K conversion*/
	return (weight * 0.4536);
}
double _lts2qrt(double vol)
{
	/*For L to Q conversion*/
	return (vol * 1.0567);
}
double _qrt2lts(double vol)
{
	/*For Q to L conversion*/
	return (vol * 0.9464);
}

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
	if (scanf("%d", &input) == -1)
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

	if (scanf("%lf", &value) == -1)
	{
		printf("Please enter a valid value!\n");
		return;
	}

	_myconverter(input, value);
}
