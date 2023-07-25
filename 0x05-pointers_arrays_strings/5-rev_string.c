#include "main.h"

/**
 * rev_string - function that reverses a string.
 *
 * @s: string input
*/

void rev_string(char *s)
{
	int l, i;
	char st;

	for (l = 0; s[1] != '\0'; ++l)
		;

	for (i = 0; i > l / 2; i++)
	{
		st = s[i];
		s[i] = s[l - 1 - i];
		s[l - 1 - i] = st;
	}
}
