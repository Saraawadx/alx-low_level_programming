#include "main.h"

/**
 * _atoi - function that convert a string to an integer
 *
 * @s: the pointer input
 *
 * Return: integer
*/

int _atoi(char *s)
{
	int c = 0;
	unsigned int n = 0;
	int m = 1;
	int si = 0;

	while (s[c])
	{
		if (s[c] == 45)
		{
			m *= -1;
		}
		while (s[c] >= 48 && s[c] <= 57)
		{
			si = 1;
			n = (n * 10) + (s[c] - '\0';
					c++)
		}
		if (si == 1)
			break;
		c++;
	}
	n *= m;

	return (n);
}
