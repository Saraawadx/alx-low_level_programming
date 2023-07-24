#include "main.h"

/**
 * swap_int - function that swaps the values of two integers
 *
 * @a: integer parameter 1
 * @b: integer parameter 2
*/

void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}
