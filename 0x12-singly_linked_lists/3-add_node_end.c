#include "lists.h"

/**
 * add_node_end - function that adds a new node at the end of a list_t list
 * @head: pointer to head
 * @str: string
 * Return: the new end node or NULL
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *endNode = malloc(sizeof(list_t));
	list_t *node = *head;

	if (!head || !endNode)
		return (NULL);
	if (str)
	{
		endNode->str = strdup(str);
		if (!endNode->str)
		{
			free(endNode);
			return (NULL);
		}
		endNode->len = _strlen(endNode->str);
	}
	if (node)
	{
		while (node->next)
			node = node->next;
		node->next = endNode;
	}
	else
		*head = endNode;
	return (endNode);
}
