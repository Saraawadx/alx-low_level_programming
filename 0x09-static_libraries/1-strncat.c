#include "main.h"

/**
 * *_strncat - function that concatenates two strings.
 *
 * @dest: pointer to destination input
 * @src: pointer to source input
 * @n: number of bytes input
 *
 * Return: char
*/

char *_strncat(char *dest, char *src, int n)
{
	int q, w;

	q = 0;

	while (dest[q])
		q++;

	for (w = 0; w < n && src[w] != '\0'; w++)
		dest[q + w] = src[w];
	dest[q + w] = '\0';

	return (dest);
}
