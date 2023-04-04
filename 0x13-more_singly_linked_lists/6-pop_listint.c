#include "lists.h"

/**
 * pop_listint - function that deletes the head node of
 * a list
 * @head: head pointer.
 *
 * Return: head node's data(n).
 */
int pop_listint(listint_t **head)
{
	int headnod;
	listint_t *h;
	listint_t *currentnod;

	if (*head == NULL)
		return (0);

	currentnod = *head;

	headnod = currentnod->n;

	h = currentnod->next;

	free(currentnod);

	*head = h;

	return (headnod);
}
