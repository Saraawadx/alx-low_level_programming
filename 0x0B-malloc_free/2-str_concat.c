#include "main.h"
#include <stdlib.h>

/**
 * _strlen - find a string length
 * @s: string input
 * Return: size
*/

int _strlen(char *s)
{
	int size = 0;

	for (; s[size] != '\0'; size++)
		;
	return (size);
}

/**
 * *str_concat - function that concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: char
*/

char *str_concat(char *s1, char *s2)
{
	int i, size1, size2;
	char *s;

	if (s1 == NULL)
		s1 = "\0";
	if (s2 == NULL)
		s2 = "\0";

	size1 = _strlen(s1);
	size2 = _strlen(s2);
	s = malloc((size1 + size2) * sizeof(char) + 1);
	if (s == 0)
		return (0);

	for (i = 0; i <= size1 + size2; i++)
	{
		if (i < size1)
			s[i] = s1[i];
		else
			s[i] = s2[i - size1];
	}
	s[i] = '\0';
	return (s);
}
