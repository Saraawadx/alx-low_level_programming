#include "main.h"

/**
 * rev_string - function that reverses a string.
 *
 * @s: string input
*/

void rev_string(char *s)
{
	int l = 0, i = 0;
	char st;

	while (s[i++])
		l++;

	for (i = l - 1; i >= l / 2; i--)
	{
		st = s[i];
		s[i] = s[l - i - 1];
		s[l - i - 1] = st;
	}
}
