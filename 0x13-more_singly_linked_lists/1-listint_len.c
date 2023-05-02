#include "lists.h"

/**
 * listint_len - a function that returns the number of elements in a linked lis
 * @h: pointer to the head
 * Return: Number of the elements in the list
 */

size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}
