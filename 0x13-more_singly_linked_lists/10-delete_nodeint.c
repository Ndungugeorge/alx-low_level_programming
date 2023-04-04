#include "lists.h"

/**
 * delete_nodeint_at_index - func deletes the node at index
 * of list.
 * @head: head pointer.
 * @index: index of the node to be deleted.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *prevnode;
	listint_t *next;

	prevnode = *head;

	if (index != 0)
	{
		for (i = 0; i < index - 1 && prevnode != NULL; i++)
		{
			prevnode = prevnode->next;
		}
	}

	if (prevnode == NULL || (prevnode->next == NULL && index != 0))
	{
		return (-1);
	}

	next = prevnode->next;

	if (index != 0)
	{
		prevnode->next = next->next;
		free(next);
	}
	else
	{
		free(prevnode);
		*head = next;
	}

	return (1);
}
