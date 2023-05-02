#include "lists.h"

/**
 * free_listint - a function that frees a list_t list
 * @head: to be freed
 * Return: success
 */
void free_listint(listint_t *head)
{
	listint_t *current;

	while (head != NULL)
	{
		current = head;
		head = head->next;
		free(current);
	}
}
