#include "lists.h"

/**
 * _strlen - function that givees the string length
 * @s: the string
 * Return: string length
*/

int _strlen(char *s)
{
        int i = 0;

        if (!s)
                return (0);
        while (*s++)
                i++;
        return (i);
}

/**
 * print_list - function that prints all the elements of a list_t list
 * @h: pointer to the first node
 * Return: list size
*/

size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		printf("[%d] %s\n", _strlen(h->str), h->str ? h->str : "(nil)");
		h = h->next;
		i++;
	}
	return (i);
}
