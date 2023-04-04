#include "lists.h"
#include<stdio.h>
/**
 * print_listint - function prints all the elements of a list.
 * @h: head.
 *
 * Return: the number of nodes.
 */
size_t print_listint(const listint_t *h)
{
	size_t no = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		no++;
	}
	return (no);
}
