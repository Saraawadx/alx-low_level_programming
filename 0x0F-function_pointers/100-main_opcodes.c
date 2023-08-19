#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - program that prints the opcodes of its own main function
 * @argv: vector of arguments
 * @argc: arguments count
 * Return: always 0
*/
int main(int argc, char **argv)
{
	char *p = (char *)main;
	int b;

	if (argc != 2)
		printf("Error\n"), exit(1);
	b = atoi(argv[1]);
	if (b < 0)
		printf("Error\n"), exit(2);

	while (b--)
		printf("%02hhc%s", *p++, b ? " " : "\n");
	return (0);
}
