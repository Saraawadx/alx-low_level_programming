#include "lists.h"

/**
 * free_list - function that frees a list_t list
 * @head: pointer to fisrt node
*/

void free_list(list_t *head)
{
	list_t *node, *nextNode;

	if (!head)
		return;
	node = head;
	while (node)
	{
		nextNode = node->next;
		free(node->str);
		free(node);
		node = nextNode;
	}
}
