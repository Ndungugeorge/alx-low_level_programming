#include "lists.h"

/**
 * listint_len -function returns the number of elements in
 * a linked list.
 * @h: head pointer.
 *
 * Return: numbers of elements.
 */
size_t listint_len(const listint_t *h)
{
	size_t no = 0;

	while (h != NULL)
	{
		h = h->next;
		no++;
	}
	return (no);
}
