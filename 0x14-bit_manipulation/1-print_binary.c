#include "main.h"

/**
 * print_binary - function that prints the binary representation of a number
 * @n: the number to be converted
 * Return: void
*/

void print_binary(unsigned long int n)
{
	int i = sizeof(n) * 8, print = 0;

	while (i)
	{
		if (n & 1L << --i)
		{
			_putchar('1');
			print++;
		}
		else if (print)
			_putchar('0');
	}
	if (!print)
		_putchar('0');
}
