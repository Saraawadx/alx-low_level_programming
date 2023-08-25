#include "lists.h"

/**
 * list_len - function that returns the number of elements in a linked list_t
 * @h: pointer to the first node
 * Return: list siz
*/

size_t list_len(const list_t *h)
{
	size_t len = 0;

	while (h)
	{
		h = h->next;
		len++;
	}
	return (len);
}
