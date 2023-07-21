#include "main.h"

/**
 * print_diagonal - function that prints diagonal lines a number of n times
 *
 * @n: the input for the number of times the lines are printed
*/

void print_diagonal(int n)
{
	int row, col;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (row = 1; row <= n; row++)
		{
			for (col = 1; col <= row; col++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
}
