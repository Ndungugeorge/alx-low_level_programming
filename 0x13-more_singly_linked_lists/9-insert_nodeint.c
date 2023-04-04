#include "lists.h"

/**
 * insert_nodeint_at_index - func inserts a new node
 * at a given position
 * @head: head pointer.
 * @idx: index of the list where the new node is
 * added.
 * @n: element.
 *
 * Return: address of the new node,or NULL if it failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *newnod;
	listint_t *h;

	hd = *head;

	if (idx != 0)
	{
		for (i = 0; i < idx - 1 && h != NULL; i++)
		{
			h = h->next;
		}
	}

	if (h == NULL && idx != 0)
		return (NULL);

	newnod = malloc(sizeof(listint_t));
	if (newnod == NULL)
		return (NULL);

	newnod->n = n;

	if (idx == 0)
	{
		newnod->next = *head;
		*head = newnod;
	}
	else
	{
		newnod->next = h->next;
		h->next = newnod;
	}

	return (newnod);
}
