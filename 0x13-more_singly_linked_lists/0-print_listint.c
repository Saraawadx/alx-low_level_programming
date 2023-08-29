#include "lists.h"

/**
 * print_listint - unction that prints all the elements of a listint_t list
 * @h: pointer to the first node in list
 * Return: size of list
*/

size_t print_listint(const listint_t *h)
{
	size_t size = 0;

	while (h)
	{
		_putchar("%d\n", h->n);
		h = h->next;
		size++;
	}
	return (size);
}
