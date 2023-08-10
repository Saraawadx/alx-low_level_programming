#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that multiplies two numbers
 * @argc: arguments count
 * @argv: arguments value
 * Return: int
*/

int main(int argc, char *argv[])
{
	int tot;

	if (argc == 3)
	{
		tot = atoi(argv[1] * atoi(argv[2]));
		printf("%d\n", tot);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}
