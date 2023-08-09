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
 * *argstostr - function that concatenates all the arguments of your program
 * @ac: int
 * @av: arguments
 * Return: char
*/

char *argstostr(int ac, char **av)
{
	int i = 0, c = 0, j = 0, cpt = 0;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (; i < ac; i++, c++)
		c += _strlen(av[i]);

	s = malloc(sizeof(char) * c + 1);
	if (s == 0)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++, cpt++)
			s[cpt] = av[i][j];

		s[cpt] = '\n';
		cpt++;
	}
	s[cpt] = '\0';
	return (s);
}
