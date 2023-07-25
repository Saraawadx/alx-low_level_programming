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

	strand(time(NULL));
	while (num <= 2645)
	{
		p  = rand() % 128;
		num += p;
		putchat(p);
	}
	putchar(2772 - num);

	return (0);
}
