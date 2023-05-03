#include "lists.h"

/**
 * sum_listint - a function that returns the sum of all the data(n) of a list
 * @head: A pointer to the head node of the list
 *
 * Return: if the list is empty 0, otherwise the sum of the data
 */
int sum_listint(listint_t *head)
{
	listint_t *current;
	int sum = 0;

	if (head == NULL)
	{
		return (0);
	}

	current = head;
	while (current->next)
	{
		current = current->next;
		sum += current->n;
	}
	return (sum);
}
