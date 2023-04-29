#include "lists.h"

/**
 * add_node - a function that adds a new node at the beginning of a list_t list
 * @head: pointer to head
 * @str: string to be added
 * Return: the address of the new pointer or NULL if it fails
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	char *duplicate;
	int len;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	duplicate = strdup(str);
	if (duplicate == NULL)
	{
		free(new_node);
		return (NULL);
	}
	for (len = 0; str[len];)
	{
		len++;
	}

	new_node->str = duplicate;
	new_node->len = len;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
