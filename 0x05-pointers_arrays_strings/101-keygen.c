#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates random valid passwords for the program 101-crackme
 *
 * Return: 0
*/

int main(void)
{
	int num;
	char p;

	srand(time(NULL));
	while (num <= 2645)
	{
		p  = rand() % 128;
		num += p;
		putchar(p);
	}
	putchar(2772 - num);

	return (0);
}
