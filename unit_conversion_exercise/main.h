#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * struct conv - Define a new type conv_t for the type struct conv
 * @n: First member
 * @s1: Second member
 * @s2: Third member
 * @func: Forth member
 */
typedef struct conv
{
	int n;
	char *s1;
	char *s2;
	double (*func)(double);
} conv_t;

void _myconverter(int input, double value);
double _cel2fahr(double temp);
double _fahr2cel(double temp);
double _inch2cm(double dist);
double _cm2inch(double dist);
double _kg2pound(double weight);
double _pound2kg(double weight);
double _lts2qrt(double vol);
double _qrt2lts(double vol);
void _inputHelper(int input, double value);

#endif
