#include "main.h"

int main()
{
	int input = 0;
	double value = 0.0;
	
	while (1)
	{
		printf("Press:\n"
		"1 to convert Celsius to Fahrenheit\n"
		"2 to convert Fahrenheit to Celsius\n"
		"3 to convert Inch to Centimeters\n"
		"4 to convert Centimeters to Inches\n"
		"5 to convert Kilograms to Pounds\n"
		"6 to convert Pounds to Kilograms\n"
		"7 to convert Liters to Quarts\n"
		"8 to convert Quarts to Liters\n"
		"0 to Exit\n");

		_inputHelper(input, value);
	}

	return (0);
}
