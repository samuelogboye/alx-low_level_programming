#include "lists.h"

/**
 * list_len - function that preturns the number of elements in a linked list_t
 * @h: pointer to elements
 * Return: the number of nodes
 */

size_t list_len(const list_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}
