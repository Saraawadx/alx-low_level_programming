#include "main.h"
#include <stdlib.h>

/**
 * *_memset - occupy memory with constant
 * @p: pointer to constant
 * @c: constant
 * @n: maximum bytes
 * Return: char
*/

char *_memset(char *p, char c, unsigned int n)
{
	char *ptr = p;

	while (n--)
		*p++ = c;

	return (ptr);
}

/**
 * *_calloc - function that allocates memory for an array, using malloc
 * @nmemb: number of bytes in memory
 * @size: element size
 * Return: pointer
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *m;

	if (size == 0 || nmemb == 0)
		return (NULL);
	m = malloc(sizeof(int) * nmemb);

	if (m == 0)
		return (NULL);

	_memset(m, 0 sizeof(int) * nmemb);

	return (m);
}
