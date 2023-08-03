#include "main.h"

/**
 * _sqrt_recursion - function that returns the natural square root of a number
 * square - find square root
 * @n: number input
 * @v: square root
 * Return: int
*/

int square(int n, int v);
int _sqrt_recursion(int n)
{
	return (square(n, 1));
}

/**
 * square - find square root
 * @n: number input
 * @v: square root
 * Return: int
*/

int square(int n, int v)
{
	if (v * v == n)
		return (v);
	else if (v * v < n)
		return (square(n, v + 1));
	else
		return (-1);
}
