#include "lists.h"

/**
 * free_listint2 - function that frees a listint_t list
 * @head: head node pointer
 * Return: void
*/

void free_listint2(listint_t **head)
{
	listint_t *ptrNode;

	while (head)
	{
		ptrNode = head;
		head = head->next;
		free(ptrNode);
	}
	*head = NULL;
}
