#include "lists.h"

/**
 * free_listint - function that frees a linked list
 * @head: head pointer.
 *
 * Return: 0.
 */
void free_listint(listint_t *head)
{
	listint_t *nextnode;

	while ((nextnode = head) != NULL)
	{
		head = head->next;
		free(nextnode);
	}
}
