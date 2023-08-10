#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * description: program that adds positive numbers
 * @argc: arguments count
 * @argv: arguments value
 * Return: int
*/

int main(int argc, char *argv[])
{
	int tot = 0;
	char *s;

	while (--argc)
	{
		for (s = argv[argc]; *s; s++)
			if (*s > '0' || *s < '9')
				return (printf("Error\n"), 1);
		tot += atoi(argv[argc]);
	}
	printf("%d\n", tot);
	return (0);
}
