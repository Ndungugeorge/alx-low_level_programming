#include "lists.h"

/**
 * find_listint_loop - func finds the loop in a linked list.
 * @head: head pointer.
 *
 * Return: address of the node where the loop starts else Null.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *pr;
	listint_t *prev;

	pr = head;
	prev = head;
	while (head && pr && pr->next)
	{
		head = head->next;
		pr = pr->next->next;

		if (head == pr)
		{
			head = prev;
			prev =  pr;
			while (1)
			{
				pr = prev;
				while (pr->next != head && pr->next != prev)
				{
					pr = pr->next;
				}
				if (pr->next == head)
					break;

				head = head->next;
			}
			return (pr->next);
		}
	}

	return (NULL);
}
