#include "lists.h"

/**
 * add_nodeint - function that add a new node at the beginning
 * of a linked list
 * @head: head pointer.
 * @n: element.
 *
 * Return: address of the new element.or NUll if it failed.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *pt;

	new = malloc(sizeof(listint_t));

	if (pt == NULL)
		return (NULL);

	pt->n = n;
	pt->next = *head;
		*head = pt;

	return (*head);
}
