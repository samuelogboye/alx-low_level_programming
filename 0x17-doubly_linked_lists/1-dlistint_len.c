#include "lists.h"

/**
 * dlistint_len - returns the number elements of a dlistint_t list
 * @h: pointer to the head
 * Return: the number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	int number = 0;

	if (h == NULL)
		return (number);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		number++;
		h = h->next;
	}
	return (number);
}
