#include "main.h"

/**
 * _cel2fahr - converts cel to fahr
 * @temp: user input
 * Return: converted temp
 */
double _cel2fahr(double temp)
{
	return ((temp * 1.8) + 32);
}
/**
 * _fahr2cel - converts fahr to cel
 * @temp: user input
 * Return: converted temp
 */
double _fahr2cel(double temp)
{
	return ((temp - 32) * 0.5556);
}
/**
 * _inch2cm - converts inch to cm
 * @dist: user input
 * Return: converted dist
 */
double _inch2cm(double dist)
{
	return (dist * 0.3937);
}
/**
 * _cm2inch - converts cm to inch
 * @dist: user input
 * Return: converted dist
 */
double _cm2inch(double dist)
{
	return (dist * 2.54);
}
/**
 * _kg2pound - converts kgs to pounds
 * @weight: user input
 * Return: converted weight
 */
double _kg2pound(double weight)
{
	return (weight * 2.2046);
}
/**
 * _pound2kg - converts pounds to kgs
 * @weight: user input
 * Return: converted weight
 */
double _pound2kg(double weight)
{
	return (weight * 0.4536);
}
/**
 * _lts2qrt - converts litres to quarts
 * @vol: user input
 * Return: converted volume
 */
double _lts2qrt(double vol)
{
	return (vol * 1.0567);
}
/**
 * _qrt2lts - converts quarts to litres
 * @vol: user input
 * Return: converted volume
 */
double _qrt2lts(double vol)
{
	return (vol * 0.9464);
}
