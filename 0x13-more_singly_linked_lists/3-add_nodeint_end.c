#include "lists.h"

/**
 * add_nodeint_end - function that adds a new node at the end of a list
 * @head: pointer to head node
 * @n: new node value
 * Return: the new node or NULL
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode = malloc(sizeof(listint_t));
	listint_t *ptrNode;

	if (head == NULL || newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;

	if (*head == NULL)
		*head = newNode;
	else
	{
		ptrNode = *head;
		while (ptrNode->next)
			ptrNode = ptrNode->next;
		ptrNode->next = newNode;
	}
	return (newNode);

}
