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
 * print_listint_safe - func prints a linked list.
 * @head: head of a list.
 *
 * Return: number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nnodes = 0;
	listp_t *pr, *new, *addnode;

	pr = NULL;
	while (head != NULL)
	{
		new = malloc(sizeof(listp_t));

		if (new == NULL)
			exit(98);

		new->p = (void *)head;
		new->next = pr;
		pr = new;

		addnode = pr;

		while (addnode->next != NULL)
		{
			addnode = addnode->next;
			if (head == addnode->p)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free_listp(&pr);
				return (nnodes);
			}
		}

		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		nnodes++;
	}

	free_listp(&pr);
	return (nnodes);
}
