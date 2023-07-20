#include "main.h"

/**
 * _isupper - a function that checks if the character is uppercase it give 1
 *            if lowercase in gives 0
 *
 *@c: the alphabet input to be checked
 *
 * Return: 1 if upper 0 if lower
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
