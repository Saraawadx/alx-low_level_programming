#include "main.h"

/**
 * is_prime_number -  function that returns 1 if the input 
 *                    integer is a prime number, otherwise return 0
 * @n: number input
 * @t: int
 * Return: int
*/

int check_prime(int n, int t);
int is_prime_number(int n)
{
	return (check_prime(n, 2));
}

/**
 * 
 * */
