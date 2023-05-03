#include "lists.h"

/**
 * reverse_listint - a function that reverses a linkedlist
 * @head: Pointer to the head of the list
 * Return: a pointer to tthe first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev_node, *current, *next_node;

	current = *head;
	while (current)
	{
		next_node = current->next;
		current->next = prev_node;
		prev_node = current;
		current = next_node;
	}

	*head = prev_node;
	return (*head);
}
