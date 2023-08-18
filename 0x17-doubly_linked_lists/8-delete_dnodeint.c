#include "lists.h"

/**
 * delete_dnodeint_at_index - func deletes the node at index of a
 * list
 *
 * @head: head pointer
 * @index: index of the new node
 * Return: 1,else -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *h1;
	dlistint_t *tail;
	unsigned int i;

	h1 = *head;

	if (h1 != NULL)
		while (h1->prev != NULL)
			h1 = h1->prev;

	i = 0;

	while (h1 != NULL)
	{
		if (i == index)
		{
			if (i == 0)
			{
				*head = h1->next;
				if (*head != NULL)
					(*head)->prev = NULL;
			}
			else
			{
				tail->next = h1->next;

				if (h1->next != NULL)
					h1->next->prev = tail;
			}

			free(h1);
			return (1);
		}
		tail = h1;
		h1 = h1->next;
		i++;
	}

	return (-1);
}
