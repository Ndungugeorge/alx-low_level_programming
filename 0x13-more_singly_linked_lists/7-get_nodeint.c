#include "lists.h"

/**
 * get_nodeint_at_index - function returns the nth node of list
 * @head: head pointer.
 * @index: index of the node.
 *
 * Return: nth node else returns NULL.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int j;

	for (j = 0; j < index && head != NULL; j++)
	{
		head = head->next;
	}

	return (head);
}
