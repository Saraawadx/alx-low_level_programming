#include "main.h"

/**
 * print_line - function that prints a straight line
 *
 * @n: the input for the number or times (_) to be printed
*/

void print_line(int n)
{
	int i;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 1; i <= n; i++)
		_putchar('_');
		_putchar('\n');
	}
}
