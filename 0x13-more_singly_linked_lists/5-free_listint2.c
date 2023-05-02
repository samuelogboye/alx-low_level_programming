#include "lists.h"

/**
 * free_listint2 - a function that frees a list_t list
 * @head: to be freed
 * Return: success
 */
void free_listint2(listint_t **head)
{
	listint_t *current, *temp;

	if (head == NULL)
	{
		return;
	}

	current = *head;
	while (current != NULL)
	{
		temp = current;
		current = current->next;
		free(temp);
	}
	*head = NULL;
}
