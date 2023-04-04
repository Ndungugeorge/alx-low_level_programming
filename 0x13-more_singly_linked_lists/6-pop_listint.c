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
	int headnode;
	listint_t *hd;
	listint_t *currentnod;

	if (*head == NULL)
		return (0);

	currentnod = *head;

	headnode = currentnode->n;

	hd = currentnode->next;

	free(currentnod);

	*head = hd;

	return (headnode);
}
