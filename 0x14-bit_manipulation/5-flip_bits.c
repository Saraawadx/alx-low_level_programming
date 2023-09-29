#include "main.h"

/**
 * flip_bits - function that returns the number of bits you would need to
 *             flip to get from one number to another
 * @n: first number
 * @m: second number
 * Return: result
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xvl = n ^ m;
	unsigned int i = 0;

	while (xvl)
	{
		if (xvl & 1ul)
			i++;
		xvl = xvl >> 1;
	}
	return (i);
}
