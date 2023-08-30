#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the nth node of a list
 * @head: head node pointer
 * @index: position of the node
 * Return: node or NULL
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *ptrNode;
	int n;

	for (ptrNode = head, n = 0; ptrNode && n < index; ptrNode = ptrNode->next, n++)
		;
	return (ptrNode);
}
