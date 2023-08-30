#include "lists.h"

/**
 * add_nodeint - function that adds a new node at the beginning
 * @head: head node pointer
 * @n: new node value
 * Return: new node or NULL
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *nwnd = malloc(sizeof(listint_t));

	if (!head || !nwnd)
		return (NULL);

	nwnd->next = NULL;
	nwnd->n = n;
	if (*head)
		nwnd->next = *head;
	*head = nwnd;
	return (nwnd);
}
