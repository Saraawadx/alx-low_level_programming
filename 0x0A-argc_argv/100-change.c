#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints minimum number of coins to make change for an amount of money
 * @argc: arguments count
 * @argv: arguments value
 * Return: int
*/

int main(int argc, char *argv[])
{
	if (argc == 2)
	{
		int i, minch = 0, cash = atoi(argv[1]);
		int ch[] = {25, 10, 5, 2, 1};

		for (i = 0; i < 5; i++)
		{
			if (cash >= ch[i])
			{
				minch += cash / ch[i];
				cash = cash % ch[i];
				if (cash % ch[i] == 0)
				{
					break;
				}
			}
		}
		printf("%d\n", minch);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
