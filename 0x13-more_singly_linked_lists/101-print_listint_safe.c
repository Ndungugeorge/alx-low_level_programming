#include "lists.h"

/**
 * free_listp - func prints linked list
 * @head: head pointer
 *
 * Return: Return 0.
 */
void free_listp(listp_t **head)
{
	listp_t *tempo;
	listp_t *currnode;

	if (head != NULL)
	{
		currnode = *head;
		while ((tempo = currnode) != NULL)
		{
			currnode = currnode->next;
			free(tempo);
		}
		*head = NULL;
	}
}

/**
 * print_listint_safe - prints a linked list.
 * @head: head of a list.
 *
 * Return: number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nnodes = 0;
	listp_t *headptr, *newnode, *addnode;

	headptr = NULL;
	while (head != NULL)
	{
		newnode = malloc(sizeof(listp_t));

		if (newnode == NULL)
			exit(98);

		newnode->p = (void *)head;
		newnode->next = headptr;
		headptr = newnode;

		addnode = headptr;

		while (addnode->next != NULL)
		{
			addnode = addnode->next;
			if (head == addnode->p)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free_listp(&headptr);
				return (nnodes);
			}
		}

		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		nnodes++;
	}

	free_listp(&headptr);
	return (nnodes);
}
