#include "variadic_functions.h"

/**
 * print_numbers - function that prints numbers, followed by a new line
 * @separator: the separator
 * @n: number of arguments
 * @...: integers
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	int i = n;
	va_list pt;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(pt, n);
	while (i--)
		printf("%d%s", va_arg(pt, int),
			i ? (separator ? separator : "") : "\n");
	va_end(pt);
}
