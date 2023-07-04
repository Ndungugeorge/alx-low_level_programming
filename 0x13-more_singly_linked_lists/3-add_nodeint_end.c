#include "lists.h"

/**
 * add_nodeint_end -function add a new node at the end
 * of a linked list
 * @head: head pointer.
 * @n: element.
 *
 * Return: address of the new element. or NUll if it failed.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode;
	listint_t *tempo;

	(void)tempo;

	newnode = malloc(sizeof(listint_t));

	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->next = NULL;
	tempo = *head;
	if (*head == NULL)
	{
		*head = newnode;
	}
	else
	{
		while (tempo->next != NULL)
		{
			tempo = tempo->next;
		}
		tempo->next = newnode;
	}

	return (*head);
}
