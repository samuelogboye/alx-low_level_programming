#include "lists.h"

/**
 * pop_listint - Deletes the head node of a listint_t linked list,
 *               and returns the head node’s data (n)
 *
 * @head: Pointer to a pointer to the head node of the linked list
 *
 * Return: If the linked list is empty - 0
 *         Otherwise - the data (n) of the head node that was deleted
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (head == NULL || *head == NULL)
	{
		return (0);
	}

	temp = *head;
	*head = (*head)->next;
	n = temp->n;
	free(temp);

	return (n);
}
