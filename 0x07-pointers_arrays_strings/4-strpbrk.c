#include "main.h"

/**
 * *_strpbrk - function that searches a string for any of a set of bytes
 * @s: string input
 * @accept: bytes input
 * Return: char
*/

char *_strpbrk(char *s, char *accept)
{
	int j, i;
	char *p;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (accept[j] == s[i])
			{
				p = &s[i];
				return (p);
			}
			j++;
		}
		i++;
	}
	return (0);
}
