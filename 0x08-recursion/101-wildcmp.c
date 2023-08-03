#include "main.h"

/**
 * star - iterates past asterisk
 * @s2: second string
 * Return: pointer
*/

char *star(char *s2)
{
	if (*s2 == '*')
		return (star(s2 + 1));
	else
		return (s2);
}

/**
 * inception - magic and reality
 * @s1: first string
 * @s2: second string
 * Return: int
*/

int inception(char *s1, char *s2)
{
	int r = 0;

	if (*s1 == 0)
		return (0);
	if (*s1 == *s2)
		r += wildcmp(s1 + 1, s2 + 1);
	r += inception(s1 + 1, s2);
		return (r);
}

/**
 * wildcmp - compares two strings
 * @s1: first string
 * @s2: second string
 * Return: int
*/

int wildcmp(char *s1, char *s2)
{
	int r = 0;

	if (!*s1 && *s2 == '*' && !*star(s2))
		return (1);
	if (*s1 == *s2)
	{
		if (!*s1)
			return (1);
		return (wildcmp(s1 + 1, *s2 == '*' ? s2 : s2 + 1));
	}
	if (!*s1 || !s2)
		return (0);
	if (*s2 == '*')
	{
		s2 = star(s2);
		if (!*s2)
			return (1);
		if (*s1 == *s2)
			r += wildcmp(s1 + 1, s2 + 1);
		r += inception(s1, s2);
		return (!!r);
	}
	return (0);
}
