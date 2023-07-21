#include <stdio.h>

/**
 * main - Entry point
 *
 * Descriptin: writes numbers, frizz, buzz and frizzBuzz for
 *             multiplications of 3,5, and both 3 & 5
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && (i % 5 != 0))
		{
			printf("Frizz");
		}
		else if (i % 5 == (0 && i % 3 != 0))
		{
			printf("Buzz");
		}
		else if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FrizzBuzz");
		}
		else
		{
			printf("%d", i);
		}
		if (i != 100)
		{
			printf(" ");
		}
		else
			printf("\n");
	}

	return (0);
}
