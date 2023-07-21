#include "main.h"

/**
 * print_triangle - function prints a triangle of #
 *
 * @size: input for size
*/

void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int row, col;

		for (row = 1; row <= size; row++)
		{
			for (col = row; col < size; col++)
			{
				_putchar(' ');
			}
			for (col = 1; col <= row; col++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
