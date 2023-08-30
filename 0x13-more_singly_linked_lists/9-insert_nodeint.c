#include "lists.h"

/**
 * insert_nodeint_at_index - function to inserts a new node at a given position
 * @head: head node pointer
 * @idx: index of the new node
 * @n: new node data
 * Return: address of new node
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node, *newNode = malloc(sizeof(listint_t));
	unsigned int i = 0;

	if (head == NULL || newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;
	if (!idx)
	{
		newNode->next = *head;
		*head = newNode;
		return (newNode);
	}
	node = *head;
	while (node)
	{
		if (i == idx - 1)
		{
			newNode->next = node->next;
			node->next = newNode;
			return (newNode);
		}
		i++;
		node = node->next;
	}
	free(newNode);
	return (NULL);
}
