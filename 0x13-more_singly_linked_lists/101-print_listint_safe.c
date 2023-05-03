#include "lists.h"

/**
 * check_loop - check if there is loop in a linked list and
 *            counts the number of unique nodes in a looped linked list
 * @head: A pointer to the head of the listint_t to check.
 *
 * Return: 0 - if the list is not looped,
 *         Otherwise - the number of unique nodes in the list.
 */

size_t check_loop(const listint_t *head)
{
	const listint_t *slow_p, *fast_p;
	size_t counts = 1;

	if (head == NULL || head->next == NULL)
	{
		return (0);
	}

	slow_p = head->next;
	fast_p = (head->next)->next;

	while (fast_p)
	{
		if (slow_p == fast_p)
		{
			break;
		}
		slow_p = slow_p->next;
		fast_p = (fast_p->next)->next;
	}

	if (slow_p == fast_p)
	{
		slow_p = head;
		while (slow_p != fast_p)
		{
			counts++;
			slow_p = slow_p->next;
			fast_p = fast_p->next;
		}
		slow_p = slow_p->next;
		while (slow_p != fast_p)
		{
			counts++;
			slow_p = slow_p->next;
		}
		return (counts);
	}
	return (0);
}

/**
 * print_listint_safe - Prints a listint_t list safely.
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: The number of nodes in the list.
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t counts, index = 0;

	counts = check_loop(head);

	if (counts == 0)
	{
		while (head)
		{
			counts++;
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (index = 0; index < counts; index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (counts);
}
