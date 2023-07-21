#include "main.h"

/**
 * more_numbers - function that prints 10x the numbers from 0 to 14
 *
*/

void more_numbers(void)
{
	int row, col;

	for (row = 1; row <= 10; row++)
	{
		for (col = 0; col <= 14; col++)
		{
			if (col >= 10)
				_putchar('1');
			_putchar(col % 10 + '0');
		}
		_putchar('\n');
	}
}
