#include "main.h"
#include <stdlib>

/**
 * *_strdup - returns a pointer to a newly allocated space in memory
 *            which contains a copy of the string given as a parameter
 * @str: string input
 * Return: char
*/

char *_strdup(char *str)
{
	int i = 0, size = 0;
	char *s;

	if (str == NULL)
		return (NULL);

	for (; str[size] != '\0'; size++)
		;
	s = malloc(size * sizeof(*str) + 1);

	if (s == 0)
	{
		return (NULL);
	}
	else
	{
		for (; i < size; i++)
			s[i] = str[i];
	}
	return (s);
}
