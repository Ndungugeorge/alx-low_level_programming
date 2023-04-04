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
	listint_t *nextnode;

	prevnode = *head;

	if (index != 0)
	{
		for (i = 0; i < index - 1 && prevnode != NULL; i++)
		{
			prevnode = prevnode->nextnode;
		}
	}

	if (prevnode == NULL || (prevnode->nextnode == NULL && index != 0))
	{
		return (-1);
	}

	nextnode = prevnode->nextnode;

	if (index != 0)
	{
		prevnode->nextnode = nextnode->nextnode;
		free(nextnode);
	}
	else
	{
		free(prevnode);
		*head = nextnode;
	}

	return (1);
}
