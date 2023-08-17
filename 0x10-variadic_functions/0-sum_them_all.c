#include "variadic_functions.h"

/**
 * sum_them_all - function that returns the sum of all its parameters
 * @n: number of arguments
 * @...: the integers
 * Return: sum
*/

int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	va_list pt;

	if (n == 0)
		return (0);
	va_start(pt, n);
	while (n--)
		sum += va_arg(pt, int);
	va_end(pt);

	return (sum);
}
