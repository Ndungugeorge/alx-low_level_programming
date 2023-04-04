#include "lists.h"

/**
 * sum_listint - func returns the sum of all the data (n) of
 * a list.
 * @head: head pointer.
 *
 * Return: sum of all the data (n) else return 0.
 */
int sum_listint(listint_t *head)
{
	int sumofn;

	sumofn = 0;
	while (head != NULL)
	{
		sumofn += head->n;
		head = head->next;
	}

	return (sumofn);
}
