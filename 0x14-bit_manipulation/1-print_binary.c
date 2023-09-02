#include "main.h"

/**
 * print_binary - function that prints the binary representation of a number
 * @n: the number input
 * Return: void
*/

void print_binary(unsigned long int n)
{
	int bit = sizeof(n) * 8, num = 0;

	while (bit)
	{
		if (n & 1L << --bit)
		{
			_putchar('1');
			num++;
		}
		else if (num)
			_putchar('0');
	}
	if (!num)
		_putchar('0');
}
