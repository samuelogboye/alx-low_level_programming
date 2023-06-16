#include "lists.h"

/**
 * free_dlistint - a function that frees a doubly linked list
 * @head: to be freed
 * Return: success
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current;

	if (head != NULL)
		while (head->prev != NULL)
			head = head->prev;

	while ((current = head) != NULL)
	{
		head = head->next;
		free(current);
	}
}
