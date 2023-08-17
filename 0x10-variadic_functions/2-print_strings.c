#include "variadic_functions.h"

/**
 * print_strings - function that prints strings, followed by a new line.
 * @separator: the separator
 * @n: number
 * @...: strings
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	int i = n;
	char *str;
	va_list pt;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(pt, n);
	while (i--)
		printf("%s%s", (str = va_arg(pt, char *)) ? str : "(nil)",
				i ? (separator ? saparator : "") : "\n");
	va_end(pt);
}
