#include "lists.h"

/**
 * free_listint2 - function that frees a linked list
 * @head: head pointer.
 *
 * Return: 0.
 */
void free_listint2(listint_t **head)
{
	listint_t *tempo;
	listint_t *currentnod;

	if (head != NULL)
	{
		currentnod = *head;
		while ((tempo = currentnod) != NULL)
		{
			currentnod = currentnod->next;
			free(tempo);
		}
		*head = NULL;
	}
}

/**
 * free_listint_safe - frees a linked list.
 * @h: head of a list.
 *
 * Return: size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t nnodes = 0;
	listp_t *pr, *new, *add;
	listint_t *currentnod;

	hptr = NULL;
	while (*h != NULL)
	{
		new = malloc(sizeof(listp_t));

		if (new == NULL)
			exit(98);

		new->p = (void *)*h;
		new->next = pr;
		pr = new;

		add = pr;

		while (add->next != NULL)
		{
			add = add->next;
			if (*h == add->p)
			{
				*h = NULL;
				free_listp2(&pr);
				return (nnodes);
			}
		}

		currentnod = *h;
		*h = (*h)->next;
		free(currentnod);
		nnodes++;
	}

	*h = NULL;
	free_listp2(&pr);
	return (nnodes);
}
