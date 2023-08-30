#include "lists.h"

/**
 * pop_listint - function that deletes the head node,
 *               and returns the head node’s data
 * @head: head node pointer
 * Return: node data or 0
*/

int pop_listint(listint_t **head)
{
	listint_t *ptrNode;
	int n;

	if (head == NULL || *head == NULL)
		return (0);

	ptrNode = (*head)->next;
	n = (*head)->n;
	*head = ptrNode;
	free(ptrNode);
	return (n);
}
