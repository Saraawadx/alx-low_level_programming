#include "main.h"

/**
 * print_most_numbers - a function that prints numbers from 1 to 9
 *                      unless they are 2 and 4
*/

void print_most_numbers(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		if (num == 2 || num == 4)
			continue;
		_putchar(num + 48);
	}
	_putchar('\n');
}
