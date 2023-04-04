#include "lists.h"

/**
 * reverse_listint - func reverses a linked list.
 * @head: head pointer
 *
 * Return: pointer to the first node of reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *pt;
	listint_t *node;

	pt = NULL;
	node = NULL;

	while (*head != NULL)
	{
		node = (*head)->next;
		(*head)->next = pt;
		pt = *head;
		*head = node;
	}

	*head = pt;
	return (*head);
}
