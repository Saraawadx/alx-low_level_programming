#include "main.h"
#include <stdio.h>

/**
 * islower - functions to recgnize if ASCII in lowercase
 * @c: character
 * Return: int
 */

int islower(char c)
{
	return (c >= 97 && c <= 122);
}

/**
 * ifdelimiter - function to recongnize if ASCII is delimiter
 * @c: character
 * Return: int
*/

int ifdelimiter(char c)
{
	int i;
	char del[] = " \t\n,.!?\"(){}";

	for (i = 0; i < 12; i++)
		if (c == del[i])
			return (1);
	return (0);
}

/**
 * *cap_string - function that capitalizes all words of a string.
 * @s: string
 * Return: capitalized string
*/

char *cap_string(char *s)
{
	char *ptr = s;
	int finddelimit = 1;

	while (*s)
	{
		if (ifdelimiter(*s))
			finddelimit = 1;
		else if (islower(*s) && finddelimit)
		{
			*s -= 32;
			finddelimit = 0;
		}
		else
			finddelimit = 0;
		s++;
	}
	return (ptr);
}
