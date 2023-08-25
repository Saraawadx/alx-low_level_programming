#include "lists.h"

/**
 * add_node - function that adds a new node at the beginning of a list_t list
 * @head: pointer to head node
 * @str: string
 * Return: address oh new elemnt, or NULL if failed
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *headNew = malloc(sizeof(list_t));

	if (!head || !headNew)
		return (NULL);
	if (str)
	{
		headNew->str = strdup(str);
		if (!headNew->str)
		{
			free(headNew);
			return (NULL);
		}
		headNew->len = _strlen(headNew->str);
	}

	headNew->next = *head;
	*head = headNew;
	return (headNew);

}
